#include <fcntl.h>
#include <stdio.h>
#include <string.h>

__attribute__ ((destructor)) void ft_quit(void)
{
    system("leaks a.out");
}

int         main(int c, char **argv)
{
    int     fd;
    char    *line;

    while (*++argv)
    {
        fd = open(*argv, O_RDONLY);
        while (get_next_line(fd, &line) > 0)
        {
            write(STDOUT_FILENO, line, strlen(line));
            write(STDOUT_FILENO, "\n", 1);
            free(line);
            line = NULL;
        }
        write(STDOUT_FILENO, line, strlen(line));
        write(STDOUT_FILENO, "\n", 1);
        free(line);
        line = NULL;
    }
    system("leaks a.out");
}

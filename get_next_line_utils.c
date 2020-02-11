/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <marvin@42.f/>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 10:04:01 by mhenry            #+#    #+#             */
/*   Updated: 2020/02/08 14:12:18 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_isin_str(const char *str, char c)
{
    size_t i;
    size_t len;

    len = ft_strlen(str);
    i = 0;
    while (i < len && str[i] != c)
        i++;
    if (str[i] == c)
        return (i);
    return (-1);
}

char    *ft_strdup(const char *str)
{
    char    *tab;
    size_t  i;
    size_t  len;

    len = ft_strlen(str);
    i = 0;
    if (!(tab = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len)
    {
        tab[i] = str[i];
        i++;
    }
    tab[i] = 0;
    return (tab);
}

char    *ft_substr(char const *s, unsigned int start, size_t len_mal)
{
    char    *tab;
    size_t  i;
    size_t  len;

    len = ft_strlen(s);
    i = 0;
    if (!s)
        return (NULL);
    if (!(tab = malloc(sizeof(char) * (len_mal + 1))))
        return (NULL);
    while (len_mal-- > 0 && start < len)
    {
        tab[i] = s[start];
        i++;
        start++;
    }
    tab[i] = 0;
    return (tab);
}

size_t  savehandler(char **s1, char **s2)
{
    char    *tmp;
    size_t  i;

    i = 0;
    while ((*s1)[i] != '\n')
        i++;
    if (!(*s2 = ft_substr(*s1, 0, i)))
        return (0);
    if (!(tmp = ft_strdup(*s1 + i + 1)))
        return (0);
    free(*s1);
    *s1 = ft_strdup(tmp);
    free(tmp);
    tmp = NULL;
    return (1);
}

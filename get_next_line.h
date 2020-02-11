/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:10:43 by mhenry            #+#    #+#             */
/*   Updated: 2020/02/07 16:16:05 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

void    ft_strdel(char **s);
int     get_next_line(int fd, char **line);
size_t  ft_strlen(const char *str);
int     ft_isin_str(const char *str, char c);
char    *ft_strdup(const char *str);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     strjoin(char **s1, char s2[BUFFER_SIZE + 1]);
size_t  savehandler(char **s1, char **s2);

#endif

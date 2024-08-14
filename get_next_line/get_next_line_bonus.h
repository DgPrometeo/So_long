/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:58:01 by danielga          #+#    #+#             */
/*   Updated: 2024/08/14 16:54:25 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*get_read(char *buffer, int fd);
char	*ft_new_line(char *buffer);
char	*ft_get_line(char *line);
size_t	ft_gnlstrlen(char *str);
char	*ft_calloc_bzero(size_t count, size_t size);
char	*ft_gnlstrchr(char *s, int c);
char	*ft_gnlstrjoin(char *buff, char *s2);

#endif

/*
unistd -- read - write
stdlib -- malloc - free

BUFFER_SIZE is the number of bytes the function will read at once.
*/
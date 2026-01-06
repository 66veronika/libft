/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:21:03 by veronikasko       #+#    #+#             */
/*   Updated: 2026/01/06 17:51:41 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*read_and_stash(int fd, char *stash);
char	*get_line(char *stash);
char	*clean_stash(char *stash);

char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(const char *s);

#endif
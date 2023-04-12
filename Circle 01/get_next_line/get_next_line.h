/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:49:12 by hle               #+#    #+#             */
/*   Updated: 2023/04/12 10:54:16 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "unistd.h" //read
# include "stdlib.h" //malloc

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*extract_line(int fd, char *line);
char	*ft_strjoin(char *line, char *buff);
char	*ft_get_next_line(char *line);
char	*new_line(char *line);
char	*get_next_line(int fd);

#endif

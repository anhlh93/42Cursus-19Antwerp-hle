/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:49:12 by hle               #+#    #+#             */
/*   Updated: 2023/04/10 16:23:32 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "unistd.h"
# include "stdlib.h"

char	*get_line(int fd, char *line);
char	*ft_get_next_line(int fd, char *line);
char	*new_line(char *line);
char	*get_next_line(int fd);

#endif

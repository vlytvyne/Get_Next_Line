/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:52:59 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/29 13:53:04 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
# define SUPPORTED_THREADS 255

typedef struct		s_fd_record
{
	int				fd;
	char			*buff;
}					t_fd_record;

typedef enum		e_give_status
{
	ERROR = -1,
	NOTHING_TO_GIVE,
	LINE_IS_GIVEN
}					t_give_status;

int					get_next_line(const int fd, char **line);

#endif

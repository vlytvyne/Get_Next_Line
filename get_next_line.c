/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:37:42 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/29 13:37:43 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "get_next_line.h"

static t_give_status	nl_is_not_found(char **st_buff, char **line)
{
	int		size;

	size = ft_strlen(*st_buff) + 1;
	if (size <= 1)
	{
		*line = NULL;
		return (NOTHING_TO_GIVE);
	}
	if (!(*line = (char*)malloc(size)))
		return (ERROR);
	ft_strncpy(*line, *st_buff, size - 1);
	(*line)[size - 1] = '\0';
	ft_strdel(st_buff);
	return (LINE_IS_GIVEN);
}

static t_give_status	give_line(char **st_buff, char **line, int is_end_file)
{
	char	*start;
	int		size;

	if (!(start = ft_strchr(*st_buff, '\n')))
	{
		if (is_end_file)
			return (nl_is_not_found(st_buff, line));
		return (NOTHING_TO_GIVE);
	}
	start++;
	size = start - (*st_buff);
	if (!(*line = (char*)malloc(size)))
		return (ERROR);
	ft_strncpy(*line, *st_buff, size - 1);
	(*line)[size - 1] = '\0';
	start = ft_strdup(start);
	ft_strdel(st_buff);
	*st_buff = start;
	return (LINE_IS_GIVEN);
}

static char				**get_appropriate_buff(int fd, t_fd_record *records)
{
	int i;

	i = 0;
	while (records[i].buff)
	{
		if (records[i].fd == fd)
			return (&records[i].buff);
		i++;
	}
	records[i].fd = fd;
	records[i].buff = ft_strnew(0);
	return (&records[i].buff);
}

static void				perform_join(char **cur_buff, char *buff)
{
	char *to_free;

	to_free = *cur_buff;
	*cur_buff = ft_strjoin(*cur_buff, (char*)buff);
	ft_strdel(&to_free);
}

int						get_next_line(const int fd, char **line)
{
	char				buff[BUFF_SIZE + 1];
	char				**cur_buff;
	int					read_ret;
	t_give_status		give_status;
	static t_fd_record	records[SUPPORTED_THREADS];

	if (fd < 0 || line == NULL)
		return (ERROR);
	cur_buff = get_appropriate_buff(fd, records);
	while (1)
	{
		read_ret = read(fd, buff, BUFF_SIZE);
		if (read_ret == -1)
			return (ERROR);
		if (read_ret == 0)
		{
			give_status = give_line(cur_buff, line, 1);
			return (give_status);
		}
		buff[read_ret] = '\0';
		perform_join(cur_buff, buff);
		give_status = give_line(cur_buff, line, 0);
		if (give_status != NOTHING_TO_GIVE)
			return (give_status);
	}
}

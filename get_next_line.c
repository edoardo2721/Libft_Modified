/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:37:05 by ebrovard          #+#    #+#             */
/*   Updated: 2021/04/19 12:37:09 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char *s, char *temp, int i)
{
	if (i == 0)
	{
		free(s);
		s = 0;
	}
	else
	{
		free(s);
		s = temp;
	}
}

static int	lettura(char **n_l, char **save, int fd)
{
	int		red;
	char	*buffer;

	red = BUFFER_SIZE;
	*n_l = ft_strchr(save[fd], '\n');
	while (!(*n_l) && (red == BUFFER_SIZE))
	{
		buffer = (char *)ft_calloc((BUFFER_SIZE + 1), sizeof(char));
		if (!(buffer))
		{
			free(save[fd]);
			return (-1);
		}
		red = read(fd, buffer, BUFFER_SIZE);
		if (red == -1)
		{
			free(save[fd]);
			free(buffer);
			return (-1);
		}
		ft_free(save[fd], ft_strjoin(save[fd], buffer), 1);
		free(buffer);
	}
	return (0);
}

int	get_next_line(const int fd, char **line)
{
	static char	*save[MAX_OPEN];
	char		*n_l;

	if (!line || fd < 0 || BUFFER_SIZE < 1 || fd > MAX_OPEN)
		return (-1);
	if (!save[fd])
	{
		save[fd] = (char *)ft_calloc(sizeof(char), 1);
		if (!save[fd])
			return (-1);
	}
	n_l = 0;
	if (lettura(&n_l, save, fd) != 0)
		return (-1);
	if (n_l)
		*n_l = 0;
	*line = ft_strdup(save[fd]);
	if (n_l)
	{
		ft_free(save[fd], ft_strdup(n_l + 1), 1);
		return (1);
	}
	free(save[fd]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 03:07:56 by lucimart          #+#    #+#             */
/*   Updated: 2022/09/19 16:03:50 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static ssize_t	nl_index(char *str)
{
	size_t	i;

	i = -1;
	while (str && str[++i])
		if (str[i] == '\n')
			return (i);
	return (-1);
}

static int	free_and_ret(char **str, int ret)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
	return (ret);
}

int	get_line_and_aux(char **line, char **cache, ssize_t nl_i, char *aux)
{
	*line = ft_gnl_substr(*cache, 0, nl_i);
	aux = ft_gnl_substr(*cache, nl_i + 1, ft_gnl_strlen(*cache) - 1);
	if (!line || !aux)
		return (free_and_ret(cache, -1));
	return (1);
}

int	gnl_aux(ssize_t len_rd, char **line, char **cache, ssize_t nl_i)
{
	char	*aux;
	int		to_ret;

	if (len_rd == 0 && (!*cache || !**cache))
	{
		*line = ft_gnl_strnew(0);
		return (free_and_ret(cache, 0));
	}
	if (nl_i == -1)
	{
		*line = ft_gnl_substr(*cache, 0, ft_gnl_strlen(*cache));
		if (!line)
			return (free_and_ret(cache, -1));
		to_ret = 0;
		aux = 0;
	}
	else
		to_ret = get_line_and_aux(line, cache, nl_i, aux);
	free_and_ret(cache, 0);
	*cache = aux;
	return (to_ret);
}

int	get_next_line(int fd, char **line)
{
	char		buf[32 + 1];
	ssize_t		len_read;
	static char	*cache;
	char		*aux;

	if (!line || fd < 0 || 32 < 1)
		return (free_and_ret(&cache, -1));
	len_read = read(fd, buf, 32);
	while (len_read > 0)
	{
		buf[len_read] = '\0';
		aux = ft_gnl_strjoin(cache, buf);
		if (!aux)
			return (free_and_ret(&cache, -1));
		free_and_ret(&cache, 0);
		cache = aux;
		if (nl_index(cache) != -1)
			break ;
		len_read = read(fd, buf, 32);
	}
	if (len_read < 0)
		return (free_and_ret(&cache, -1));
	return (gnl_aux(len_read, line, &cache, nl_index(cache)));
}

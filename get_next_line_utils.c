/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 03:08:06 by lucimart          #+#    #+#             */
/*   Updated: 2022/09/13 22:59:44 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t	ft_gnl_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_gnl_strnew(size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (str);
}

char	*ft_gnl_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(sizeof(char) * (len + 1));
	if (!s || !str)
		return (NULL);
	i = 0;
	if (ft_gnl_strlen(s) > start)
	{
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

char	*ft_gnl_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;

	str = ft_gnl_strnew(ft_gnl_strlen(s1) + ft_gnl_strlen(s2));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && *s1)
		str[i++] = *s1++;
	while (s2 && *s2)
		str[i++] = *s2++;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strarrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:29:57 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/08 21:30:21 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* given a null terminated array of strings
* and a separator, join each item in the array
* with the separator in between
*/
char	*strarrjoin(char **arr, char *separator)
{
	int		i;
	char	*ret;
	char	*tmp;

	if (!arr || !*arr)
		return ("");
	ret = ft_strjoin(arr[0], separator);
	i = 1;
	while (arr[i])
	{
		if (arr[i + 1])
			tmp = ft_strjoin(arr[i], separator);
		else
			tmp = ft_strdup(arr[i]);
		ret = ft_strjoin(ret, tmp);
		free(tmp);
		i++;
	}
	return (ret);
}

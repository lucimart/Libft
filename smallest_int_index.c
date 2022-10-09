/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_int_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:22:44 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/09 20:37:20 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* in the exceptional case that the smallest int in a given array is INT_MAX
* this helper functions will return the first time its found. Will return -1
* if not found, which is an index out of boundaries and may crash something
*/
static int	index_of_max_int(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] == INT_MAX)
			return (i);
		i++;
	}
	return (-1);
}

/*
* Returns the index of the smallest int in a given
* int arr. Will return the first found.
*/
int	smallest_int_index(int *arr, int len)
{
	int	small;
	int	i;
	int	index;

	small = INT_MAX;
	i = 0;
	if (smallest_int(arr, len) == INT_MAX)
		index = index_of_max_int(arr, len);
	else
	{
		while (i < len)
		{
			if (arr[i] < small)
			{
				small = arr[i];
				index = i;
			}
			i++;
		}
	}
	return (index);
}

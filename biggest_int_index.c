/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_int_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:24:21 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/09 20:37:13 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* in the exceptional case that the biggest int in a given array is INT_MIN
* this helper functions will return the first time its found. Will return -1
* if not found, which is an index out of boundaries and may crash something
*/
static int	index_of_min_int(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] == INT_MIN)
			return (i);
		i++;
	}
	return (-1);
}

/*
* Returns the index of the biggest int in a given
* int arr. Will return the first found.
*/
int	biggest_int_index(int *arr, int len)
{
	int	big;
	int	i;
	int	index;

	big = INT_MIN;
	i = 0;
	if (biggest_int(arr, len) == INT_MIN)
		index = index_of_min_int(arr, len);
	else
	{
		while (i < len)
		{
			if (arr[i] > big)
			{
				big = arr[i];
				index = i;
			}
			i++;
		}
	}
	return (index);
}

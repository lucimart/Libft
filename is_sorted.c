/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:00:52 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/09 13:29:36 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns 1 if int arr is sorted in asc order
* Returns 0 otherwise
*/
int	is_sorted(int *arr, int len)
{
	int	i;

	i = 0;
	if (len < 1)
		return (1);
	while (i + 1 < len)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

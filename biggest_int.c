/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:28:44 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/09 15:27:00 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns the biggest int in a given
* int arr
*/

int	biggest_int(int *arr, int len)
{
	int	ret;
	int	i;

	ret = INT_MIN;
	i = 0;
	while (i < len)
	{
		if (arr[i] > ret)
			ret = arr[i];
		i++;
	}
	return (ret);
}

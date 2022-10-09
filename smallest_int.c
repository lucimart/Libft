/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:28:44 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/09 15:26:50 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns the smallest int in a given
* int arr
*/

int	smallest_int(int *arr, int len)
{
	int	ret;
	int	i;

	ret = INT_MAX;
	i = 0;
	while (i < len)
	{
		if (arr[i] < ret)
			ret = arr[i];
		i++;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_duplicated_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:33:39 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/08 21:33:48 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* returns true if array has no unique values
*/
int	has_duplicated_int(int *arr, int arr_len)
{
	int	i;

	i = 0;
	while (i < arr_len)
	{
		if (amount_of_int_in_arr(arr, arr_len, arr[i]) > 1)
			return (1);
		i++;
	}
	return (0);
}

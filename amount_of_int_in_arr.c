/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amount_of_int_in_arr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:32:53 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/08 21:33:03 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Return how many instances of a number in an array
*/
int	amount_of_int_in_arr(int *arr, int arr_len, int nbr)
{
	int	total;

	total = 0;
	while (arr_len--)
	{
		if (arr[arr_len] == nbr)
			total++;
	}
	return (total);
}

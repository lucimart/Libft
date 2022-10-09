/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:31:44 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/08 21:32:22 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* accepts an array of integers, its length
* and a number to check. Returns the index if
* the number is found or -1 if not found.
*/
int	includes_int(int *arr, int arr_len, int nbr)
{
	int	i;

	i = 0;
	while (i < arr_len)
	{
		if (arr[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

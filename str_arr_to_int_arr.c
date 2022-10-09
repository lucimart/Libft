/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_arr_to_int_arr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:44:56 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/08 21:45:36 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* returns 1 if op was succesful, 0 if was not (ex: str int was composed
* of characters or overflowed)
*/
int	str_arr_to_int_arr(char **str_arr, int str_arr_len, int **int_arr_ptr)
{
	char	*ptr;
	int		i;
	int		nbr;
	int		*int_arr;

	int_arr = *int_arr_ptr;
	i = 0;
	while (i < str_arr_len)
	{
		nbr = strtoint(str_arr[i], &ptr);
		if (*ptr)
			return (0);
		int_arr[i] = nbr;
		i++;
	}
	return (1);
}

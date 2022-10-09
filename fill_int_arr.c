/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_int_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:07:31 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/09 20:37:55 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill_int_arr(int **arr_ptr, int len, int filler)
{
	int	*arr;
	int	i;

	arr = *arr_ptr;
	i = 0;
	while (i < len)
	{
		arr[i] = filler;
		i++;
	}
}

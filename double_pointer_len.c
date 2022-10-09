/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_pointer_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:30:50 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/08 21:31:12 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* given a null terminated double pointer
* return its length
*/
size_t	double_pointer_len(void **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

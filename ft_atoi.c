/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:40:39 by lucimart          #+#    #+#             */
/*   Updated: 2022/09/13 22:03:31 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	assign_sign(const char *nptr)
{
	int	sign;

	sign = +1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nbr;

	nbr = 0;
	while (in_set(*nptr, " \n\t\v\f\r"))
		nptr++;
	sign = assign_sign(nptr);
	while (*nptr >= '0' && *nptr <= '9')
		nbr = (nbr * 10) + (*nptr++ - '0');
	return (nbr * sign);
}

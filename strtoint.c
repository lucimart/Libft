/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtoint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:40:39 by lucimart          #+#    #+#             */
/*   Updated: 2022/10/08 20:01:34 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	assign_sign(const char **nptr)
{
	int	sign;

	sign = +1;
	if (**nptr == '-' || **nptr == '+')
	{
		if (**nptr == '-')
			sign = -1;
		(*nptr)++;
	}
	return (sign);
}

static int	overflowing(int nbr, int digit, int sign)
{
	int	overflow;

	overflow = 0;
	if (sign == 1)
	{
		if ((nbr >= INT_MAX / 10) && ((nbr > INT_MAX / 10) || (digit > INT_MAX
					% 10)))
			overflow = 1;
	}
	else
	{
		if ((nbr >= INT_MAX / 10) && ((nbr > INT_MAX / 10) || (digit > 8)))
			overflow = 1;
	}
	return (overflow);
}

/*
* Like ATOI but overflow guarded and returns end position
* pointer of string such as to know if it's not NULL
* something went wrong (character, overflow)
*/
int	strtoint(const char *str, char **endptr)
{
	int	sign;
	int	nbr;
	int	digit;

	nbr = 0;
	while (in_set(*str, " \n\t\v\f\r"))
		str++;
	sign = assign_sign(&str);
	while (*str >= '0' && *str <= '9')
	{
		digit = *str - '0';
		if (overflowing(nbr, digit, sign))
			break ;
		else
			nbr = (nbr * 10) + digit;
		str++;
	}
	*endptr = (char *)str;
	return (nbr * sign);
}

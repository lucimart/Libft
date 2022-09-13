/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxtoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:48:11 by lucimart          #+#    #+#             */
/*   Updated: 2022/09/13 22:39:13 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_digits(intmax_t n, int base)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0 && ++i)
		n /= base;
	return (i);
}

void	maxtoa_aux(intmax_t *n, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
		*n *= -1;
	}
	else if (n == 0)
		str[0] = '0';
}

char	*ft_maxtoa(intmax_t n, int base, int uppercase)
{
	char	*str;
	int		len;

	len = nbr_digits(n, base);
	str = ft_strnew(len--);
	if (!str)
		return (NULL);
	maxtoa_aux(&n, str);
	while (n)
	{
		if (base > 10 && (n % base >= 10))
		{
			if (uppercase)
				str[len--] = (n % base) - 10 + 'A';
			else
				str[len--] = (n % base) - 10 + 'a';
		}
		else
			str[len--] = (n % base) + '0';
		n /= base;
	}
	return (str);
}

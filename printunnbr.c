/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printunnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:12:33 by muoz              #+#    #+#             */
/*   Updated: 2023/07/23 15:06:56 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putudec(unsigned int dec)
{
	long	ldec;
	int		ret;
	char	dec_mod;

	ret = 0;
	ldec = dec;
	if (ldec >= 10)
	{
		ret += ft_putdec(ldec / 10);
	}
	dec_mod = (ldec % 10) + '0';
	ft_putchar(dec_mod);
	return (ret + 1);
}

int	ft_putunsignnbr(unsigned int nbr)
{
	int	ret;

	ret = ft_putudec(nbr);
	return (ret);
}

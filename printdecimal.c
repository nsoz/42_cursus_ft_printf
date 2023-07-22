/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdecimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:11:31 by muoz              #+#    #+#             */
/*   Updated: 2023/07/22 21:01:54 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdec(int dec)
{
	long	ldec;
	int		ret;
	char	dec_mod;

	ret = 0;
	ldec = dec;
	if (ldec < 0)
	{
		ret += ft_putchar('-');
		ldec = ldec * -1;
	}
	if (ldec >= 10)
	{
		ret += ft_putdec(ldec / 10);
	}
	dec_mod = (ldec % 10) + '0';
	ft_putchar(dec_mod);
	return (ret + 1);
}

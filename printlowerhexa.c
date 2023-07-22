/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlowerhexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:13:42 by muoz              #+#    #+#             */
/*   Updated: 2023/07/22 21:00:45 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptrwrite(unsigned int ptr)
{
	return ((ptr - 10) + 'a');
}

static void	ft_putcal(unsigned int ptr)
{
	char	ptr_mode;

	if (ptr >= 16)
	{
		ft_putcal(ptr / 16);
		ft_putcal(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ptr_mode = ptr + '0';
		else
			ptr_mode = ft_ptrwrite(ptr);
		write(1, &ptr_mode, 1);
	}
}

static int	ft_div(unsigned int ptr)
{
	int	div;

	div = 0;
	while (ptr > 0)
	{
		ptr = ptr / 16;
		div++;
	}
	return (div);
}

int	ft_tolowerhexa(unsigned int ptr)
{
	int	ret;

	ret = ft_div(ptr);
	if (ptr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
	{
		ft_putcal(ptr);
		return (ret);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:01:39 by muoz              #+#    #+#             */
/*   Updated: 2023/07/23 16:26:27 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptrwrite(unsigned long long ptr)
{
	return ((ptr - 10) + 'a');
}

static void	ft_putcal(unsigned long long ptr)
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
		else if (ptr >= 10)
			ptr_mode = ft_ptrwrite(ptr);
		write(1, &ptr_mode, 1);
	}
}

static int	ft_div(unsigned long long ptr)
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

int	ft_putptr(unsigned long long ptr)
{
	int	ret;

	ret = ft_div(ptr) + 2;
	if (ptr == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	else
	{
		write(1, "0x", 2);
		ft_putcal(ptr);
		return (ret);
	}
}

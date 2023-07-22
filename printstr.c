/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:10:12 by muoz              #+#    #+#             */
/*   Updated: 2023/07/22 18:43:14 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	index;
	int	ret;

	ret = 0;
	index = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[index])
	{
		ret += ft_putchar(str[index]);
		index++;
	}
	return (ret);
}

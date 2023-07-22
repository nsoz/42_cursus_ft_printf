/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:53:31 by muoz              #+#    #+#             */
/*   Updated: 2023/07/22 20:59:29 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char type, va_list arg)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (type == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (type == 'p')
		len += ft_putptr(va_arg(arg, unsigned long long));
	else if (type == 'd' || type == 'i')
		len += ft_putdec(va_arg(arg, int));
	else if (type == 'u')
		len += ft_putunsignnbr(va_arg(arg, unsigned int));
	else if (type == 'x')
		len += ft_tolowerhexa(va_arg(arg, unsigned int));
	else if (type == 'X')
		len += ft_touperhexa(va_arg(arg, unsigned int));
	else if (type == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		counter;
	int		len;

	len = 0;
	counter = 0;
	va_start(arg, format);
	while (format[counter])
	{
		if (format[counter] == '%')
		{
			len += check_format(format[counter + 1], arg);
			counter++;
		}
		else
			len += ft_putchar(format[counter]);
		counter++;
	}
	va_end(arg);
	return (len);
}

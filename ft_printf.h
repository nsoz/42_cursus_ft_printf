/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:52:31 by muoz              #+#    #+#             */
/*   Updated: 2023/07/22 20:59:49 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(unsigned char c);
int	ft_putstr(char *str);
int	ft_putdec(int dec);
int	ft_putunsignnbr(unsigned int nbr);
int	ft_putptr(unsigned long long ptr);
int	ft_touperhexa(unsigned int nbr);
int	ft_tolowerhexa(unsigned int nbr);

#endif
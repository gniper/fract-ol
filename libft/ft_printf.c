/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:53:00 by heloufra          #+#    #+#             */
/*   Updated: 2021/12/20 10:05:34 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_specifier(str[i], ap);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
			count++;
		}
	}
	va_end(ap);
	return (count);
}

size_t	ft_specifier(char c, va_list ap)
{
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		return (1);
	}
	if (c == 's')
		return (ft_print_str(ap));
	if (c == 'p')
		return (ft_print_pointer(ap));
	if (c == 'd' || c == 'i')
		return (ft_print_decimal(ap));
	if (c == 'u')
		return (ft_print_unsigned(ap));
	if (c == 'x' || c == 'X')
		return (ft_print_hexa(ap, c));
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

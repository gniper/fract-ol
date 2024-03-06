/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:42:17 by heloufra          #+#    #+#             */
/*   Updated: 2021/12/20 10:05:50 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_print_str(va_list ap)
{
	char	*s;
	size_t	len;

	s = va_arg(ap, char *);
	if (!s)
	{
		s = ft_strdup("(null)");
		ft_putstr_fd(s, 1);
		len = ft_strlen(s);
		free(s);
		return (len);
	}
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	return (len);
}

size_t	ft_print_decimal(va_list ap)
{
	int					n;
	size_t				len;
	char				*s;

	n = (int)va_arg(ap, int);
	s = ft_itoa(n);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}

size_t	ft_print_unsigned(va_list ap)
{
	unsigned int			n;
	size_t					len;
	char					*s;

	n = (unsigned int)va_arg(ap, unsigned int);
	s = ft_ulltoba(n, "0123456789");
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}

size_t	ft_print_pointer(va_list ap)
{
	unsigned long long	n;
	size_t				len;
	char				*s;

	n = (unsigned long long)va_arg(ap, void *);
	if (!n)
	{
		s = ft_strdup("0x0");
		ft_putstr_fd(s, 1);
		len = ft_strlen(s);
		free(s);
		return (len);
	}
	ft_putstr_fd("0x", 1);
	s = ft_ulltoba(n, "0123456789abcdef");
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len + 2);
}

size_t	ft_print_hexa(va_list ap, char c)
{
	unsigned int		n;
	size_t				len;
	char				*s;

	n = (unsigned int)va_arg(ap, unsigned int);
	if (c == 'x')
		s = ft_ulltoba(n, "0123456789abcdef");
	else
		s = ft_ulltoba(n, "0123456789ABCDEF");
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}

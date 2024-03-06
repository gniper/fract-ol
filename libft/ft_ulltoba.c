/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:25:16 by heloufra          #+#    #+#             */
/*   Updated: 2021/12/20 07:43:32 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_char(unsigned long long n, char *base)
{
	int		count;
	size_t	len;

	if (!n)
		return (1);
	count = 0;
	len = ft_strlen(base);
	while (n != 0)
	{
		count++;
		n = n / len;
	}
	return (count);
}

char	*ft_ulltoba(unsigned long long n, char *base)
{
	int		len;
	size_t	base_len;
	char	*str;

	len = ft_count_char(n, base);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (str);
	str[len--] = '\0';
	base_len = ft_strlen(base);
	while (len >= 0)
	{
		str[len] = base[n % base_len];
		n = n / base_len;
		len--;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:51:20 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 14:30:18 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "parsing.h"
#include "libft.h"

static long double	get_whole_number(char *s)
{
	if (!s)
		return (0);
	return ((long double)ft_atoi(s));
}

static long double	get_decimal_part(char *s)
{
	long double	d;
	int			i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] == '0')
		i++;
	d = (long double)ft_atoi(s);
	while ((int)d)
		d /= 10;
	while (i--)
		d /= 10;
	return (d);
}	

static long double	get_decimal(long double wn, long double dp)
{
	if (wn < 0)
		return ((-wn + dp) * -1);
	return (wn + dp);
}

static void	free_array(char **s)
{
	int		i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

long double	ft_atof(char *n)
{
	char			**s;
	long double		d;

	if (!valid_decimal(n))
		return (0);
	s = ft_split(n, '.');
	if (!s)
		return (0);
	d = get_decimal(get_whole_number(s[0]), get_decimal_part(s[1]));
	if (s[0][0] == '-' && (int)d == 0)
	{
		free_array(s);
		return (d * -1);
	}
	free_array(s);
	return (d);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:51:36 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 15:45:57 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "libft.h"
#include "config.h"

int	valid_input(int c, char **strs)
{
	int		fractal;

	if (c != 2 && c != 4)
		return (0);
	fractal = ft_atoi(strs[1]);
	if (fractal < 1 || fractal > 4)
		return (0);
	if ((c == 4 && fractal != JULIA) || (c != 4 && fractal == JULIA))
		return (0);
	if (fractal == JULIA)
		if (!valid_decimal(strs[2]) || !valid_decimal(strs[3]))
			return (0);
	return (1);
}

int	valid_decimal(char *s)
{
	int		i;
	int		cp;

	i = 0;
	cp = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]) && s[i] != '.')
			return (0);
		if (s[i] == '.' && (!i || !s[i + 1]))
			return (0);
		if (s[i] == '.')
			cp++;
		i++;
	}
	return (cp == 1 || !cp);
}

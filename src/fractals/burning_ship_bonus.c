/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning_ship_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:50:48 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 15:46:08 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "fractol_types.h"
#include "utils.h"

static int	stability(t_data *data, long double r, long double i);

void	burning_ship(t_data *data)
{
	int				s;
	int				x;
	int				y;

	y = 0;
	while (y < data->size)
	{
		x = 0;
		while (x < data->size)
		{	
			s = stability(data, get_rl_pos(data, x), get_im_pos(data, y));
			if (s != data->max_iterations)
				mlx_pixel_put_image(data, x, y, get_color(s, data));
			x++;
		}
		y++;
	}
}

static int	stability(t_data *data, long double r, long double i)
{
	int				j;
	long double		a;
	long double		b;
	long double		tmp;

	j = 0;
	a = 0;
	b = 0;
	while (j < data->max_iterations)
	{
		tmp = 2 * fabsl(a * b) - i;
		a = a * a - b * b - r;
		b = tmp;
		if (a * a + b * b > 4)
			break ;
		j++;
	}
	return (j);
}

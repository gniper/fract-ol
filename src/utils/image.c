/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:53:16 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/14 10:53:17 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_types.h"

void	mlx_pixel_put_image(t_data *data, int x, int y, int color)
{
	data->buffer[(y * data->s_l / 4) + x] = color;
}

void	mlx_clear_image(t_data *data)
{
	int			x;
	int			y;

	y = 0;
	while (y < data->size)
	{
		x = 0;
		while (x < data->size)
		{
			mlx_pixel_put_image(data, x, y, 0);
			x++;
		}
		y++;
	}
}

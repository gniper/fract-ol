/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:08:36 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 16:07:55 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "fractals.h"
#include "config.h"
#include "fractol_types.h"
#include "utils.h"

int	render(t_data *data)
{
	mlx_clear_image(data);
	if (data->fractal_name == JULIA || data->fractal_name == AUTO_JULIA)
		julia(data);
	else if (data->fractal_name == MANDELBORT)
		mandelbort(data);
	mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
	return (0);
}

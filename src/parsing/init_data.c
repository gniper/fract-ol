/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:51:27 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 13:55:58 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "parsing.h"
#include "libft.h"
#include "fractol_types.h"
#include "utils.h"
#include "config.h"

t_data	init_data(char **strs)
{
	t_data	d;

	d.size = 800;
	d.max_iterations = 100;
	d.fractal_name = ft_atoi(strs[1]);
	if (d.fractal_name == JULIA)
	{
		d.real = ft_atof(strs[2]);
		d.imag = ft_atof(strs[3]);
	}
	d.mlx = mlx_init();
	d.win = mlx_new_window(d.mlx, d.size, d.size, "Fract'Ol");
	d.img = mlx_new_image(d.mlx, d.size, d.size);
	d.buffer = (int *)mlx_get_data_addr(d.img, &d.bpp, &d.s_l, &d.endian);
	set_colors(d.colors);
	d.top = 2;
	d.down = -2;
	d.left = -2;
	d.right = 2;
	return (d);
}

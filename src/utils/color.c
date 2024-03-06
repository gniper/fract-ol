/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:37:52 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 10:44:51 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_types.h"

int	get_color(int s, t_data *data)
{
	return (data->colors[(225 - (int)(s * 225 / data->max_iterations)) % 24]);
}

void	set_colors(int *colors)
{
	colors[0] = 0xffffff;
	colors[1] = 0xe1d8e2;
	colors[2] = 0xd5d6dc;
	colors[3] = 0xc8b3ad;
	colors[4] = 0x97aec4;
	colors[5] = 0x9f5878;
	colors[6] = 0x903c5b;
	colors[7] = 0x9e3c4f;
	colors[8] = 0x61194a;
	colors[9] = 0x351339;
	colors[10] = 0x7a2251;
	colors[11] = 0x481f58;
	colors[12] = 0x411255;
	colors[13] = 0x511445;
	colors[14] = 0x6c94bf;
	colors[15] = 0x6c94bf;
	colors[16] = 0x6c94bf;
	colors[17] = 0xc19c9c;
	colors[18] = 0xca9788;
	colors[19] = 0xca9788;
	colors[20] = 0xca9788;
	colors[21] = 0xca9788;
	colors[22] = 0xdac9c5;
	colors[23] = 0xe1d8e1;
}

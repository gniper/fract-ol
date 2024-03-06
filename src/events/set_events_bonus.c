/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_events_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:48:14 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 15:59:39 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "events.h"
#include "events_bonus.h"
#include "utils.h"
#include "fractol_types.h"
#include "config.h"

void	set_events(t_data *data)
{
	if (data->fractal_name != AUTO_JULIA)
		mlx_mouse_hook(data->win, zoom_mouse_center, data);
	else
		mlx_hook(data->win, 6, (1L << 6), julia_changer, data);
	mlx_hook(data->win, 17, 0, destroy, data);
	mlx_key_hook(data->win, key_event, data);
	mlx_loop_hook(data->mlx, render, data);
}

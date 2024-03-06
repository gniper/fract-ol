/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_arrows_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:47:56 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/14 10:47:57 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_types.h"
#include "config.h"

int	move_arrows(int key, t_data *data)
{
	long double		step;

	step = (data->top - data->down) * 0.08;
	if (key == LEFT || key == DOWN)
		step = step * -1;
	if (key == UP || key == DOWN)
	{
		data->top += step;
		data->down += step;
	}
	else if (key == RIGHT || key == LEFT)
	{
		data->right += step;
		data->left += step;
	}
	return (0);
}

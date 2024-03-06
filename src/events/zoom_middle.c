/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_middle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:49:17 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/14 10:49:18 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_types.h"

int	zoom_middle(int button, int x, int y, t_data *data)
{
	long double		scale;

	(void)x;
	(void)y;
	scale = (data->top - data->down) * 0.10;
	if (button == 5)
	{
		data->top -= scale;
		data->down += scale;
		data->right -= scale;
		data->left += scale;
	}
	else if (button == 4)
	{
		data->top += scale;
		data->down -= scale;
		data->right += scale;
		data->left -= scale;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_mouse_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:09:14 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 16:31:31 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "fractol_types.h"
#include "config.h"

int	zoom_mouse_center(int button, int x, int y, t_data *data)
{
	long double	len;
	long double	real;
	long double	imag;
	long double	p;

	len = data->top - data->down;
	real = get_rl_pos(data, x);
	imag = get_im_pos(data, y);
	if (button == IN)
		p = -0.35;
	else if (button == OUT)
		p = 0.35;
	if (button == IN || button == OUT)
	{
		data->top = imag + ((len + (len * p)) * ((data->top - imag) / len));
		data->down = imag - ((len + (len * p)) * ((imag - data->down) / len));
		data->right = real + ((len + (len * p)) * ((data->right - real) / len));
		data->left = real - ((len + (len * p)) * ((real - data->left) / len));
	}
	return (0);
}

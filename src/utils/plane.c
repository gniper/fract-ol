/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:53:23 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/14 10:53:24 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_types.h"

long double	get_rl_pos(t_data *data, int x)
{
	return (data->left + (x * (data->right - data->left) / data->size));
}

long double	get_im_pos(t_data *data, int y)
{
	return (data->top - (y * (data->top - data->down) / data->size));
}

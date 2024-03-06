/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_changer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:44:33 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/15 14:24:30 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_types.h"
#include "utils.h"

int	julia_changer(int x, int y, t_data *data)
{
	data->real = get_rl_pos(data, x);
	data->imag = get_im_pos(data, y);
	return (0);
}

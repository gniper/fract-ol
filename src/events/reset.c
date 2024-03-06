/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:48:05 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/14 10:48:06 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_types.h"

void	reset(t_data *data)
{
	data->top = 2;
	data->down = -2;
	data->right = 2;
	data->left = -2;
}
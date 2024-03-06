/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:40:19 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/14 10:40:54 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVENTS_BONUS_H
# define EVENTS_BONUS_H
# include "fractol_types.h"

int		move_arrows(int key, t_data *data);
int		zoom_mouse_center(int button, int x, int y, t_data *data);
#endif
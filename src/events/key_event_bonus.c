/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_event_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:44:50 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 15:47:58 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fractol_types.h"
#include "config.h"
#include "events_bonus.h"
#include "events.h"

int	key_event(int key, t_data *data)
{
	if (key == ESC)
		exit(0);
	else if (UP == key || LEFT == key || RIGHT == key || DOWN == key)
		move_arrows(key, data);
	if (key == 49)
		reset(data);
	return (0);
}

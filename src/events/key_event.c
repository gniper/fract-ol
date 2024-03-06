/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_event.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:52:27 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 15:47:46 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fractol_types.h"
#include "config.h"
#include "events.h"

int	key_event(int key, t_data *data)
{
	if (key == ESC)
		exit(0);
	if (key == 49)
		reset(data);
	return (0);
}

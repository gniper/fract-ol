/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:41:03 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/14 10:41:04 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVENTS_H
# define EVENTS_H
# include "fractol_types.h"

int		julia_changer(int x, int y, t_data *data);
int		zoom_middle(int button, int x, int y, t_data *data);
int		key_event(int key, t_data *data);
void	set_events(t_data *data);
void	reset(t_data *data);
#endif
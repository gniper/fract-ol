/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:42:58 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 09:23:20 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "fractol_types.h"

int			render(t_data *data);
void		print_help(void);
void		print_control(void);
long double	get_rl_pos(t_data *data, int x);
long double	get_im_pos(t_data *data, int y);
void		mlx_pixel_put_image(t_data *data, int x, int y, int color);
void		mlx_clear_image(t_data *data);
void		set_colors(int *colors);
int			get_color(int s, t_data *data);
int			destroy(t_data *data);
#endif
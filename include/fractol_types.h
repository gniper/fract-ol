/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_types.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:42:32 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/14 11:37:40 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_TYPES_H
# define FRACTOL_TYPES_H

typedef struct s_data
{
	void			*mlx;
	void			*win;
	void			*img;
	long double		top;
	long double		down;
	long double		left;
	long double		right;
	int				fractal_name;
	long double		real;
	long double		imag;
	int				size;
	int				*buffer;
	int				bpp;
	int				s_l;
	int				endian;
	int				colors[24];
	int				max_iterations;
}	t_data;
#endif
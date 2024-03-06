/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:42:49 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/14 10:42:50 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H
# include "fractol_types.h"

int				valid_input(int c, char **strs);
t_data			init_data(char **strs);
long double		ft_atof(char *n);
int				valid_decimal(char *s);
#endif
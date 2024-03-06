/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 06:28:56 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 09:34:28 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_help(void)
{
	ft_printf("----------------------------------------------");
	ft_printf("---------------------------\n");
	ft_printf("| Usage : ./fractol");
	ft_printf(" [Fractal number] {Option} \t\t\t\t|\n");
	ft_printf("----------------------------------------------");
	ft_printf("---------------------------\n");
	ft_printf("|\tFractal number :\t\t\t\t\t\t|\n");
	ft_printf("|\t\t1 : Julia set manual input\t\t\t\t|\n");
	ft_printf("|\t\t\tOption : (valid format for float ddd.ddd or ddd)|\n");
	ft_printf("|\t\t\t\t[x] Real axe coordinate\t\t\t|\n");
	ft_printf("|\t\t\t\t[z] Complex axe coordinate\t\t|\n");
	ft_printf("|\t\t2 : Mandelbrot\t\t\t\t\t\t|\n");
	ft_printf("|\t\t3 : Julia set auto-mouse input\t\t\t\t|\n");
	ft_printf("----------------------------------------------");
	ft_printf("--------------------------\n");
}

void	print_control(void)
{
	ft_printf("----------------------------------------------");
	ft_printf("---------------------------\n");
	ft_printf("| Controls :\t\t\t\t\t\t\t\t|\n");
	ft_printf("|\tZoom :\t\t\t\t\t\t\t\t|\n");
	ft_printf("|\t\tZoom to the center by scrolling the mouse\t\t|\n");
	ft_printf("|\tReset values : Space\t\t\t\t\t\t|\n");
	ft_printf("----------------------------------------------");
	ft_printf("---------------------------\n");
}

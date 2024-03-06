/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:11:50 by heloufra          #+#    #+#             */
/*   Updated: 2022/03/16 15:42:22 by heloufra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include "utils.h"
#include "parsing.h"
#include "events.h"
#include "fractol_types.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (!valid_input(argc, argv))
	{
		print_help();
		exit(0);
	}
	data = init_data(argv);
	print_control();
	set_events(&data);
	mlx_loop(data.mlx);
	return (0);
}

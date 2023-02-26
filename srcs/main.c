/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadarys <loadarys@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:22:29 by loadarys          #+#    #+#             */
/*   Updated: 2022/10/18 13:48:37 by loadarys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	if (argc < 2)
		ft_exit_error("Error: Too few arguments ./cub3D [map.cub]\n");
	else if (argc > 2)
		ft_exit_error("Error: Too many arguments ./cub3D [map.cub]\n");
	ft_bzero(&data, sizeof(t_data));
	ft_init_data(&data);
	ft_parse_file(&data, argv[1]);
	ft_start_draw(&data);
	ft_free_exit(&data);
	return (0);
}

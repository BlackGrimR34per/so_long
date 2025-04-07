/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:41:28 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 21:41:28 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_game	game;
	char	**map;

	if (argc != 2)
		return (print_error("Error\n"));
	if (check_extension(argv[1]))
		return (1);
	map = map_extractor(argv[1]);
	is_valid_map(map, &game);
	free_map(map);
	game.map = map_extractor(argv[1]);
	init_game(&game);
	load_sprites(&game);
	mlx_hook(game.win, 2, 1L << 0, handle_input, &game);
	mlx_hook(game.win, 17, 1L << 17, destroy_window, &game);
	mlx_loop_hook(game.mlx, render_map, &game);
	mlx_loop(game.mlx);
}

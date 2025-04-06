/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:04:39 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/06 17:17:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_game(t_game *game)
{
	int	width;
	int	height;

	width = (game->map_size.y + 1) * SIZE;
	height = (game->map_size.x + 1) * SIZE;
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, width, height, "Cat Go");
	game->movement_count = 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:16:42 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/04 14:35:36 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	load_sprites(t_game *game)
{
	int	w;
	int	h;

	game->assets.w = mlx_xpm_file_to_image(game->mlx, WALL_PATH, &w, &h);
	game->assets.f = mlx_xpm_file_to_image(game->mlx, FLOOR_PATH, &w, &h);
	game->assets.c = mlx_xpm_file_to_image(game->mlx, CLCT_PATH, &w, &h);
	game->assets.p = mlx_xpm_file_to_image(game->mlx, PLAYER_PATH, &w, &h);
	game->assets.e = mlx_xpm_file_to_image(game->mlx, EXIT_PATH, &w, &h);
}

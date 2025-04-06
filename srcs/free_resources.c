/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_resources.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:45:12 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/06 21:18:26 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_resources(t_game *game)
{
	free_map(game->map);
	mlx_destroy_image(game->mlx, game->assets.c);
	mlx_destroy_image(game->mlx, game->assets.e);
	mlx_destroy_image(game->mlx, game->assets.p);
	mlx_destroy_image(game->mlx, game->assets.w);
	mlx_destroy_image(game->mlx, game->assets.f);
}

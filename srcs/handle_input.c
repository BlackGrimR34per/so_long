/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:06:54 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/04 22:44:23 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	handle_input(int keycode, t_game *game)
{
	if (keycode == 65307)
		destroy_window(game);
	else if (keycode == 119 || keycode == 65362)
		handle_movement(game->player.x - 1, game->player.y, game);
	else if (keycode == 97 || keycode == 65361)
		handle_movement(game->player.x, game->player.y - 1, game);
	else if (keycode == 115 || keycode == 65364)
		handle_movement(game->player.x + 1, game->player.y, game);
	else if (keycode == 100 || keycode == 65363)
		handle_movement(game->player.x, game->player.y + 1, game);
	else
		printf("Invalid Key Pressed\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_movement.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:52:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/15 20:00:50 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_valid_movement(int row, int col, t_game *game)
{
	if (game->map[row][col] == '1')
	{
		ft_printf("Touching a wall\n");
		return (1);
	}
	else if (game->map[row][col] == 'C')
		game->collectible_count--;
	else if (game->map[row][col] == 'E')
	{
		if (game->collectible_count == 0)
			destroy_window(game);
		else
		{
			ft_printf("Please collect all the collectibles!\n");
			return (1);
		}
	}
	return (0);
}

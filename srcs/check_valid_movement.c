/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_movement.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:52:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/06 18:43:11 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_valid_movement(int row, int col, t_game *game)
{
	if (game->map[row][col] == '1')
	{
		printf("Touching a wall\n");
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
			printf("Please collect all the collectibles!\n");
			return (1);
		}
	}
	return (0);
}

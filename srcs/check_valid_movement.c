/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_movement.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:52:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/04 22:40:06 by yosherau         ###   ########.fr       */
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
	return (0);
}

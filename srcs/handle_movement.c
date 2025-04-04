/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:35:39 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/04 22:47:52 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	handle_movement(int row, int column, t_game *game)
{
	if (check_valid_movement(row, column, game))
		return (0);
	else
	{
		game->player.x = row;
		game->player.y = column;
		return (0);
	}
}

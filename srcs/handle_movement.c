/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:35:39 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/15 20:01:05 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	handle_movement(int row, int column, t_game *game)
{
	if (check_valid_movement(row, column, game))
		return (0);
	else
	{
		game->movement_count++;
		reflect_on_map(row, column, game);
		ft_printf("Number of movements: %d\n", game->movement_count);
		return (0);
	}
}

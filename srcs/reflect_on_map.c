/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reflect_on_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:49:06 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/05 10:58:09 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	reflect_on_map(int row, int column, t_game *game)
{
	game->map[row][column] = 'P';
	game->map[game->player.x][game->player.y] = '0';
	game->player.x = row;
	game->player.y = column;
	return (0);
}


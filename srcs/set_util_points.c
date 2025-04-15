/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_util_points.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:01:20 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/15 20:00:36 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_util_points(t_map_utils *map_utils, char c, int row, int column)
{
	if (c == 80)
	{
		map_utils->player_start.x = row;
		map_utils->player_start.y = column;
	}
	else if (c == 69)
	{
		map_utils->exit.x = row;
		map_utils->exit.y = column;
	}
}

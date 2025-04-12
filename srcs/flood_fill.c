/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:42:14 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/11 11:57:09 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	fill(char **tab, t_map_utils *map_utils, int row, int col)
{
	int	size_x;
	int	size_y;

	size_x = map_utils->map_size.x;
	size_y = map_utils->map_size.y;
	if (row < 0 || col < 0 || row > size_x || col > size_y)
		return ;
	if (tab[row][col] == 'F' || (tab[row][col] != '0' && tab[row][col] != 'C'
		&& tab[row][col] != 'P'))
		return ;
	if (tab[row][col] == 'P')
		map_utils->elem_cnt[tab[row][col] % 3]++;
	if (tab[row][col] == 'C')
		map_utils->elem_cnt[tab[row][col] % 3]++;
	tab[row][col] = 'F';
	fill(tab, map_utils, row -1, col);
	fill(tab, map_utils, row +1, col);
	fill(tab, map_utils, row, col - 1);
	fill(tab, map_utils, row, col + 1);
}

void	flood_fill(char **tab, t_map_utils *map_utils)
{
	fill(tab, map_utils, map_utils->player_start.x, map_utils->player_start.y);
}

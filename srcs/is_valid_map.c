/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:02:24 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/05 13:46:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

// static void	print_map(char **two_d_map)
// {
// 	int	row;
// 	int	column;

// 	row = -1;
// 	while (two_d_map[++row])
// 	{
// 		column = -1;
// 		while (two_d_map[row][++column])
// 			printf("%c", two_d_map[row][column]);
// 		printf("\n");
// 	}
// }

int	is_valid_map(char **two_d_map, t_game *game)
{
	t_map_utils	map_utils;

	map_utils.elem_cnt[0] = 1;
	map_utils.elem_cnt[1] = 1;
	map_utils.elem_cnt[2] = 1;
	if (is_valid_chars(two_d_map, map_utils.elem_cnt, &map_utils.player_start))
		return (free_two_d_map(two_d_map));
	if (has_manditory_elements(map_utils.elem_cnt))
		return (free_two_d_map(two_d_map));
	if (!map_is_rectangle(two_d_map, &map_utils.map_size))
		return (free_two_d_map(two_d_map));
	if (has_valid_walls(two_d_map, map_utils.map_size.x))
		return (free_two_d_map(two_d_map));
	if (has_valid_path(two_d_map, &map_utils))
		return (free_two_d_map(two_d_map));
	game->player.x = map_utils.player_start.x;
	game->player.y = map_utils.player_start.y;
	return (0);
}

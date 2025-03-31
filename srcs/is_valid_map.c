/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:02:24 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/31 12:01:36 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	is_valid_map(char **two_d_map)
{
	t_map_utils	map_utils;

	map_utils.arr[0] = 1;
	map_utils.arr[1] = 1;
	map_utils.arr[2] = 1;
	if (is_valid_chars(two_d_map, arr, &point))
		return (free_two_d_map(two_d_map));
	if (has_manditory_elements(arr))
		return (free_two_d_map(two_d_map));
	if (!map_is_rectangle(two_d_map, &rows))
		return (free_two_d_map(two_d_map));
	if (has_valid_walls(two_d_map, rows))
		return (free_two_d_map(two_d_map));
	if (has_valid_path(two_d_map, arr, &point))
		return (free_two_d_map(two_d_map));
	return (0);
}

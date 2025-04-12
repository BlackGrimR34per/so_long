/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:41:17 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/11 12:05:44 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	is_valid_chars(char **two_d_map, t_map_utils *map_utils)
{
	int		row;
	int		column;
	char	c;

	row = -1;
	while (two_d_map[++row])
	{
		column = -1;
		while (two_d_map[row][++column])
		{
			c = two_d_map[row][column];
			if (c != 48 && c != 49 && c != 67 && c != 69 && c != 80)
				return (1);
			if (c == 67 || c == 69 || c == 80)
			{
				map_utils->elem_cnt[c % 3]--;
				set_util_points(map_utils, c, row, column);
			}
		}
	}
	return (0);
}

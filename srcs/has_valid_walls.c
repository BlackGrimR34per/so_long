/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_valid_walls.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:46:00 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/06 18:50:32 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	has_valid_walls(char **two_d_map, int row_num)
{
	int	column_len;
	int	column;
	int	row;

	column = -1;
	row = 0;
	column_len = ft_strlen(two_d_map[0]);
	while (two_d_map[0][++column])
		if (two_d_map[0][column] != 49)
			return (1);
	while (++row < row_num)
		if (two_d_map[row][0] != 49 || two_d_map[row][column_len - 1] != 49)
			return (1);
	column = -1;
	while (two_d_map[row_num][++column])
		if (two_d_map[row_num][column] != 49
			|| two_d_map[row_num][column] != 49)
			return (1);
	return (0);
}

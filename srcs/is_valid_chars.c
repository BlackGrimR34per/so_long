/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:41:17 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/29 20:57:05 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	is_valid_chars(char **two_d_map, int *arr, t_point *point)
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
				arr[c % 3]--;
			if (c == 80)
			{
				point->x = row;
				point->y = column;
			}
		}
	}
	return (0);
}

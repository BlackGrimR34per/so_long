/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_rectangle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:36:57 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/31 12:19:11 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	map_is_rectangle(char **two_d_map, t_point *map_size)
{
	int	row_length;
	int	row;

	row_length = ft_strlen(two_d_map[0]);
	map_size->x = 0;
	map_size->y = row_length - 1;
	row = 0;
	while (two_d_map[++row])
	{
		if ((int)ft_strlen(two_d_map[row]) != row_length)
			return (0);
		map_size->x++;
	}
	return (1);
}

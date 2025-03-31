/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:42:14 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/30 15:57:54 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	fill(char **tab, t_point size, int row, int col)
{
	if (row < 0 || col < 0 || row >= size.y || col >= size.x)
		return ;
	if (tab[row][col] == 'F' || tab[row][col] != '0')
		return ;
	tab[row][col] = 'F';
	fill(tab, size, row -1, col);
	fill(tab, size, row +1, col);
	fill(tab, size, row, col - 1);
	fill(tab, size, row, col + 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin.x, begin.y);
}

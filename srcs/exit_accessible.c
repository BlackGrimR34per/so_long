/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_accessible.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:56:40 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/11 12:09:05 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	exit_accessible(char **two_d_map, t_map_utils *map_utils)
{
	if (two_d_map[map_utils->exit.x - 1][map_utils->exit.y] == 'F')
		return (0);
	if (two_d_map[map_utils->exit.x + 1][map_utils->exit.y] == 'F')
		return (0);
	if (two_d_map[map_utils->exit.x][map_utils->exit.y + 1] == 'F')
		return (0);
	if (two_d_map[map_utils->exit.x][map_utils->exit.y - 1] == 'F')
		return (0);
	return (1);
}

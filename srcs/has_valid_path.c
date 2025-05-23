/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_valid_path.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:31:50 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/10 15:10:33 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	has_valid_path(char **two_d_map, t_map_utils *map_utils)
{
	flood_fill(two_d_map, map_utils);
	if (exit_accessible(two_d_map, map_utils) || map_utils->elem_cnt[1] != 1
		|| map_utils->elem_cnt[2] != 1)
		return (1);
	return (0);
}

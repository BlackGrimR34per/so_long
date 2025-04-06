/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_manditory_elements.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:20:51 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/05 21:12:57 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	has_manditory_elements(int *arr, t_game *game)
{
	game->collectible_count = 1 - arr[1];
	if (arr[0] != 0)
		return (1);
	if (arr[2] != 0)
		return (1);
	if (arr[1] > 0)
		return (1);
	return (0);
}

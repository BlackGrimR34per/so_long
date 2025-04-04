/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:35:39 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/05 10:57:23 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	handle_movement(int row, int column, t_game *game)
{
	if (check_valid_movement(row, column, game))
		return (0);
	else
	{
		reflect_on_map(row, column, game);
		return (0);
	}
}

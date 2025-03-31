/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:41:28 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 21:41:28 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "./minilibx-linux/mlx.h"
#include <stdio.h>


int	main(int argc, char *argv[])
{
	t_game	game;

	if (argc != 2)
		return (write_error());
	if (check_extension(argv[1]))
		return (1);
	game.map = map_extractor(argv[1]);
	is_valid_map(game.map);
}

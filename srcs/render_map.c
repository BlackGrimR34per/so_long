/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:42:23 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/06 18:53:29 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	put_image_to_window(void *sprite, t_game *game, int row, int column)
{
	if (sprite)
		mlx_put_image_to_window(game->mlx, game->win,
			sprite, column * 100, row * 100);
}

int	render_map(t_game *game)
{
	int		row;
	int		column;
	void	*sprite;

	row = -1;
	while (game->map[++row])
	{
		column = -1;
		while (game->map[row][++column])
		{
			sprite = NULL;
			if (game->map[row][column] == '1')
				sprite = game->assets.w;
			else if (game->map[row][column] == '0')
				sprite = game->assets.f;
			else if (game->map[row][column] == 'C')
				sprite = game->assets.c;
			else if (game->map[row][column] == 'E')
				sprite = game->assets.e;
			else if (game->map[row][column] == 'P')
				sprite = game->assets.p;
			put_image_to_window(sprite, game, row, column);
		}
	}
	return (0);
}

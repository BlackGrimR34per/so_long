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
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "./minilibx-linux/mlx.h"

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

typedef struct s_image_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_image_data;

typedef struct s_game
{
	t_vars			vars;
	t_image_data	image;
	int				x;
	int				y;
}	t_game;

void	my_mlx_pixel_put(t_image_data *image, int x, int y, int color)
{
	char	*dest;

	dest = image->addr + (y * image->line_length + x * (image->bits_per_pixel / 8));
	*(unsigned int *)dest = color;
}

int	render_frame(t_game *game)
{

	my_mlx_pixel_put(&game->image, game->x, game->y, 0xFFFFFF);
	mlx_put_image_to_window(game->vars.mlx, game->vars.win, game->image.img, 0, 0);
	return (0);
}

int	handle_keypress(int keycode, t_game *game)
{
	if (keycode == 65307)
		mlx_destroy_window(game->vars.mlx, game->vars.win);
	else if (keycode == 119)
		game->y -= 5;
	else if (keycode == 97)
		game->x -= 5;
	else if (keycode == 115)
		game->y+= 5;
	else if (keycode == 100)
		game->x += 5;
}

int	main(void)
{
	t_game	game;

	game.x = 10;
	game.y = 10;
	game.vars.mlx = mlx_init();
	game.vars.win = mlx_new_window(game.vars.mlx, 500, 500, "Game window");
	game.image.img = mlx_new_image(game.vars.mlx, 500, 500);
	game.image.addr = mlx_get_data_addr(game.image.img, &game.image.bits_per_pixel,
					&game.image.line_length, &game.image.endian);
	mlx_loop_hook(game.vars.mlx, render_frame, &game);
	mlx_hook(game.vars.win, 2, 1L<<0, handle_keypress, &game);
	mlx_loop(game.vars.mlx);
}

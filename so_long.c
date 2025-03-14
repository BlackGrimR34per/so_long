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
#include <string.h>
#define RED 0x00FF0000

void	my_mlx_pixel_put(t_image_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void draw_circle(t_image_data *data, int xc, int yc, int x, int y){
	my_mlx_pixel_put(data, xc+x, yc+y, RED);
	my_mlx_pixel_put(data, xc-x, yc+y, RED);
	my_mlx_pixel_put(data, xc+x, yc-y, RED);
	my_mlx_pixel_put(data, xc-x, yc-y, RED);
	my_mlx_pixel_put(data, xc+y, yc+x, RED);
	my_mlx_pixel_put(data, xc-y, yc+x, RED);
	my_mlx_pixel_put(data, xc+y, yc-x, RED);
	my_mlx_pixel_put(data, xc-y, yc-x, RED);
}

void	circle_bres(t_image_data *data, int xc, int yc, int r)
{
	int	x;
	int	y;
	int	d;

	x = 0;
	y = r;
	d = 3 - 2 * r;
	draw_circle(data, xc, yc, x, y);
	while (y >= x)
	{
		if (d > 0)
		{
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;
		x++;
		draw_circle(data, xc, yc, x, y);
	}
}

void	draw_square(t_image_data *data, int x, int y, int size, int color)
{
	int	row;
	int	column;

	row = -1;
	while (++row < size)
	{
		column = -1;
		while (++column < size)
			my_mlx_pixel_put(data, x, y + column, color);
		x++;
	}
}

int	main(void)
{
	void			*mlx_connection;
	void			*mlx_window;
	t_image_data	image;

	mlx_connection = mlx_init();
	mlx_window = mlx_new_window(mlx_connection, 1920, 1080, "Window 1");
	image.img = mlx_new_image(mlx_connection, 1920, 1080);
	image.addr = mlx_get_data_addr(image.img, &image.bits_per_pixel,
			&image.line_length, &image.endian);
	// draw_square(&image, 5, 5, 100, 0x00FF0000);
	circle_bres(&image, 100, 100, 50);
	mlx_put_image_to_window(mlx_connection, mlx_window, image.img, 0, 0);
	mlx_loop(mlx_connection);

}

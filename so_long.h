/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:03:01 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/11 12:08:13 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./minilibx-linux/mlx.h"
# include "./libft/libft.h"
# include <stdio.h>
# include <fcntl.h>

# define WALL_PATH "./assets/wall.xpm"
# define PLAYER_PATH "./assets/char.xpm"
# define CLCT_PATH "./assets/collectible.xpm"
# define EXIT_PATH "./assets/exit.xpm"
# define FLOOR_PATH "./assets/floor.xpm"
# define SIZE 100

typedef struct s_assets
{
	void	*w;
	void	*c;
	void	*e;
	void	*p;
	void	*f;
}	t_assets;

typedef struct s_img_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_img_data;

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_game
{
	int			collectible_count;
	int			movement_count;
	char		**map;
	void		*mlx;
	void		*win;
	t_point		map_size;
	t_point		player;
	t_assets	assets;
	t_img_data	*img_data;
}	t_game;

typedef struct s_map_utils
{
	int		elem_cnt[3];
	t_point	map_size;
	t_point	player_start;
	t_point	exit;
}	t_map_utils;

int		check_extension(char *str);
int		check_valid_movement(int row, int col, t_game *game);
int		destroy_window(t_game *game);
int		exit_accessible(char **two_d_map, t_map_utils *map_utils);
void	flood_fill(char **tab, t_map_utils *map_utils);
void	free_map(char **full_map);
void	free_resources(t_game *game);
int		free_two_d_map(char **two_d_map, char *message);
int		handle_input(int keycode, t_game *game);
int		handle_movement(int row, int column, t_game *game);
int		handle_input(int keycode, t_game *game);
int		has_manditory_elements(int *arr, t_game *game);
int		has_valid_path(char **two_d_map, t_map_utils *map_utils);
int		has_valid_walls(char **two_d_map, int row_num);
void	init_game(t_game *game);
int		is_valid_chars(char **two_d_map, t_map_utils *map_utils);
int		is_valid_map(char **two_d_map, t_game *game);
void	load_sprites(t_game *game);
char	*ft_strrchr(const char *s, int c);
char	**map_extractor(char *map);
int		map_is_rectangle(char **two_d_map, t_point *map_size);
int		print_error(char *error);
int		reflect_on_map(int row, int column, t_game *game);
int		render_map(t_game *game);
void	set_util_points(t_map_utils *map_utils, char c, int row, int column);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:03:01 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/04 15:09:22 by yosherau         ###   ########.fr       */
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

typedef struct s_game
{
	char		**map;
	void		*mlx;
	void		*win;
	t_assets	assets;
	t_img_data	*img_data;
}	t_game;

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_map_utils
{
	int		elem_cnt[3];
	t_point	map_size;
	t_point	player_start;
}	t_map_utils;

int		check_extension(char *str);
void	flood_fill(char **tab, t_map_utils *map_utils);
void	free_map(char **full_map);
int		free_two_d_map(char **two_d_map);
int		handle_input(int keycode, t_game *game);
int		has_manditory_elements(int *arr);
int		has_valid_path(char **two_d_map, t_map_utils *map_utils);
int		has_valid_walls(char **two_d_map, int row_num);
void	init_game(t_game *game);
int		is_valid_chars(char **two_d_map, int *arr, t_point *point);
int		is_valid_map(char	**two_d_map);
void	load_sprites(t_game *game);
char	*ft_strrchr(const char *s, int c);
char	**map_extractor(char *map);
int		map_is_rectangle(char **two_d_map, t_point *map_size);
int		map_parser(char *map);
int		render_map(t_game *game);
int		write_error(void);

#endif
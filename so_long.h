/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:03:01 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/31 12:00:42 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./minilibx-linux/mlx.h"
# include "./libft/libft.h"
# include <stdio.h>
# include <fcntl.h>

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
	t_img_data	*img_data;
}	t_game;

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_map_utils
{
	int		arr[3];
	t_point	size;
	t_point	player_start;
}	t_map_utils;

int		check_extension(char *str);
void	flood_fill(char **tab, t_point size, t_point begin);
int		free_two_d_map(char **two_d_map);
int		has_manditory_elements(int *arr);
int		has_valid_path(char **two_d_map, int *arr, t_point *point);
int		has_valid_walls(char **two_d_map, int row_num);
int		is_valid_chars(char **two_d_map, int *arr, t_point *point);
int		is_valid_map(char	**two_d_map);
char	*ft_strrchr(const char *s, int c);
char	**map_extractor(char *map);
int		map_is_rectangle(char **two_d_map, int *column);
int		map_parser(char *map);
int		write_error(void);

#endif
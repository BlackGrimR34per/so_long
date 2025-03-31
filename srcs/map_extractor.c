/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_extractor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:40:33 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/28 15:56:59 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**map_extractor(char *map)
{
	int		fd;
	char	*temp;
	char	*one_d_map;
	char	*line;
	char	**two_d_map;

	fd = open(map, O_RDONLY);
	line = get_next_line(fd);
	one_d_map = ft_strdup("");
	while (line)
	{
		temp = one_d_map;
		one_d_map = ft_strjoin(one_d_map, line);
		free(line);
		free(temp);
		line = get_next_line(fd);
	}
	two_d_map = ft_split(one_d_map, '\n');
	free(one_d_map);
	return (two_d_map);
}

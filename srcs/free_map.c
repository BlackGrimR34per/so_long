/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:41:03 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/01 16:56:30 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_map(char **full_map)
{
	int	row;

	row = -1;
	while (full_map[++row])
		free(full_map[row]);
	free(full_map);
	return ;
}

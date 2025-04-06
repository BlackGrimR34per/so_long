/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_two_d_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:25:26 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/06 18:17:21 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	free_two_d_map(char **two_d_map, char *message)
{
	int	row;

	row = -1;
	while (two_d_map[++row])
		free(two_d_map[row]);
	free(two_d_map);
	return (print_error(message));
}

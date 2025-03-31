/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_two_d_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:25:26 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/29 15:27:34 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	free_two_d_map(char **two_d_map)
{
	int	row;

	row = -1;
	while (two_d_map[++row])
		free(two_d_map[row]);
	free(two_d_map);
	return (write_error());
}

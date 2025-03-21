/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:23:50 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/18 16:38:08 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colours.h"

int	add_shade(double distance, int color)
{
	int	new_t;
	int	new_r;
	int	new_g;
	int	new_b;

	new_b = get_b(color) * (1 - distance);
	new_g = get_g(color) * (1 - distance);
	new_r = get_r(color) * (1 - distance);
	new_t = get_t(color) * (1 - distance);
	return (new_t << 24 | new_r << 16 | new_g << 8 | new_b);
}

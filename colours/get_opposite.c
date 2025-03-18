/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_opposite.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:30:53 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/18 16:54:57 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colours.h"

int	get_opposite(int colour)
{
	unsigned char	new_b;
	unsigned char	new_g;
	unsigned char	new_r;
	unsigned char	new_t;

	new_b = ~(get_b(colour));
	new_g = ~(get_g(colour));
	new_r = ~(get_r(colour));
	new_t = ~(get_t(colour));
	return (new_t << 24 | new_r << 16 | new_g << 8 | new_b);
}

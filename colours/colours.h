/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colours.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:34:50 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/18 16:42:44 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOURS_H
# define COLOURS_H

int	add_shade(double distance, int color);
int	get_b(int trgb);
int	get_g(int trgb);
int	get_r(int trgb);
int	get_t(int trgb);
int	get_opposite(int colour);

#endif
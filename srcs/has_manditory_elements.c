/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_manditory_elements.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:20:51 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/29 16:31:01 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	has_manditory_elements(int *arr)
{
	if (arr[0] != 0)
		return (1);
	if (arr[2] != 0)
		return (1);
	if (arr[1] > 0)
		return (1);
	return (0);
}

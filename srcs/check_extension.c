/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:23:05 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/13 16:20:44 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_extension(char *str)
{
	char	*dot;
	size_t	str_len;

	dot = ft_strrchr(str, '.');
	if (!dot)
		print_error("Please input a proper filename");
	str_len = ft_strlen(dot + 1);
	if (str_len != 3)
		print_error("Please input a file with proper extension");
	else if (ft_strncmp(dot + 1, "ber", 3) != 0)
		print_error("Please input a file with proper extension");
	return (0);
}

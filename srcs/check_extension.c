/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:23:05 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/06 18:05:18 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_extension(char *str)
{
	char	*dot;
	size_t	str_len;

	dot = ft_strrchr(str, '.');
	if (!dot)
		return (perror("Please input a proper filename"), 1);
	str_len = ft_strlen(dot + 1);
	if (str_len != 3)
		return (perror("Please input a file with proper extension"), 1);
	else if (ft_strncmp(dot + 1, "ber", 3) != 0)
		return (perror("Please input a file with proper extension"), 1);
	return (0);
}

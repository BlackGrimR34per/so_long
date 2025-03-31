/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:23:05 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/27 15:49:39 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_extension(char *str)
{
	char	*dot;
	size_t	str_len;

	dot = ft_strrchr(str, '.');
	str_len = ft_strlen(dot + 1);
	if (!dot)
		perror("Please input a proper filename");
	else if (str_len != 3)
		perror("Please input a file with proper extension");
	else if (ft_strncmp(dot + 1, "ber", 3) != 0)
		perror("Please input a file with proper extension");
	return (0);
}

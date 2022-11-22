/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:46:11 by relouren          #+#    #+#             */
/*   Updated: 2022/11/21 13:46:11 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		if (size > i + j + 1)
			dst[i + j] = src[j];
		else if (size == i + j + 1)
			dst[i + j] = '\0';
		j++;
	}
	return (i + j);
}

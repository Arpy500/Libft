/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:49:33 by relouren          #+#    #+#             */
/*   Updated: 2022/11/21 00:49:33 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	flag;

	flag = size;
	i = 0;
	while (size > 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	while (src[i] != '\0')
		i++;
	if (flag)
		dst[i] = '\0';
	return (i);
}

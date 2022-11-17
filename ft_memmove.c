/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:09:44 by relouren          #+#    #+#             */
/*   Updated: 2022/11/17 16:09:44 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	temp[n];
	size_t	i;

	i = 0;
	while (n)
	{
		temp[i] = ((char *)src)[i];
		i++;
		n--;
	}
	while (i)
	{
		((char *)dest)[n] = temp[n];
		n++;
		i--;
	}
	return (dest);
}

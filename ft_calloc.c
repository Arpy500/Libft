/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:55:03 by relouren          #+#    #+#             */
/*   Updated: 2022/12/07 18:16:53 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	total_size;
	size_t	i;

	total_size = nmemb * size;
	ptr = (char *)malloc(total_size);
	i = 0;
	while (i < total_size)
		ptr[i++] = 0;
	return ((void *)(ptr));
}

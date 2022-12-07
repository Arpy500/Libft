/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:14:57 by relouren          #+#    #+#             */
/*   Updated: 2022/12/07 19:26:15 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	total_size;
	size_t	i;
	size_t	j;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(total_size);
	i = 0;
	while (i < total_size)
		ptr[i] = s1[i++];
	j = 0;
	while (i + j < total_size)
		ptr[j + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}

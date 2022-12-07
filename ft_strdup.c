/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:33:50 by relouren          #+#    #+#             */
/*   Updated: 2022/12/07 18:51:43 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	ptr = (char *)malloc(size + 1);
	while (i < size)
		ptr[i] = s[i++];
	ptr[i] = '\0';
	return (ptr);
}

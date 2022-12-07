/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:59:30 by relouren          #+#    #+#             */
/*   Updated: 2022/12/07 19:07:31 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = (char *)malloc(len + 1);
	i = 0;
	j = (size_t)start;
	while (i < len && s[j])
	{
		ptr[i] = s[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

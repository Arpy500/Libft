/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:02:47 by relouren          #+#    #+#             */
/*   Updated: 2022/11/26 14:02:47 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	s1_val;
	unsigned char	s2_val;
	int				dif;
	size_t			i;

	dif = 0;
	i = 0;
	while (i < n)
	{
		s1_val = (unsigned char)(((char *)s1)[i]);
		s2_val = (unsigned char)(((char *)s2)[i]);
		dif = (int)(s1_val - s2_val);
		if (dif != 0)
			return (dif);
		i++;
	}
	return (dif);
}

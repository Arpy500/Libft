/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:27:28 by relouren          #+#    #+#             */
/*   Updated: 2022/11/22 23:27:28 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	dif;

	dif = 0;
	while (n)
	{
		dif = (int)*s1 - (int)*s2;
		if (dif != 0 || (*s1 == '\0' || *s2 == '\0'))
			return (dif);
		s1++;
		s2++;
		n--;
	}
	return (dif);
}

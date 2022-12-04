/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:20:23 by relouren          #+#    #+#             */
/*   Updated: 2022/12/03 22:20:23 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*occurance;

	if (!*little)
		return ((char *)big);
	occurance = NULL;
	i = 0;
	while (big[i] && len)
	{
		if (big[i] == *little)
		{
			occurance = (char *)(&big[i]);
			j = 0;
			while (big[i] == little[j] && big[i++] && len--)
				j++;
			if (!little[j])
				return (occurance);
			occurance = NULL;
			continue ;
		}
		i++;
		len--;
	}
	return (occurance);
}

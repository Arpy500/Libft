/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relouren <relouren@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:54:02 by relouren          #+#    #+#             */
/*   Updated: 2022/11/16 12:54:02 by relouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}

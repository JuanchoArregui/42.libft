/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:21:57 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/02 18:50:44 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((*(unsigned char *)(s + i)) == (unsigned char) c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}

/* 
DESCRIPTION: The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
RETURN VALUES: The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.
*/
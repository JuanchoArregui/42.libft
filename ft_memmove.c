/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:23:39 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/02 18:51:32 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	if ((unsigned char *)dst > (const unsigned char *)src)
	{
		while (len--)
			*(unsigned char *)(dst + len) = *(const unsigned char *)(src + len);
	}
	else if ((unsigned char *)dst < (const unsigned char *)src)
		ft_memcpy(dst, src, len);
	return (dst);
}

/*
DESCRIPTION: The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
RETURN VALUES: The memmove() function returns the original value of dst.
*/
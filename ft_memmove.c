/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:23:39 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/03 14:30:08 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((unsigned char *)dst > (const unsigned char *)src)
	{
		while (len--)
			*(unsigned char *)(dst + len) = *(const unsigned char *)(src + len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*
DESCRIPTION: The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
RETURN VALUES: The memmove() function returns the original value of dst.
*/
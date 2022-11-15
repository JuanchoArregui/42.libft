/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:23:03 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/15 13:20:17 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*cp_dst;
	unsigned const char	*cp_src;

	cp_dst = (unsigned char *)dst;
	cp_src = (unsigned const char *)src;
	while ((cp_dst != 0 || cp_src != 0) && n--)
		cp_dst[n] = cp_src[n];
	return (dst);
}

/*
DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.
     Applications in which dst and src might overlap should use memmove(3) instead.

RETURN VALUES
     The memcpy() function returns the original value of dst.
*/
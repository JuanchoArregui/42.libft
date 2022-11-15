/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:23:39 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/15 13:20:22 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cp_dst;
	unsigned const char	*cp_src;

	cp_dst = dst;
	cp_src = src;
	if (!dst && !src)
		return (0);
	if (cp_dst > cp_src)
	{
		cp_dst += len;
		cp_src += len;
		while (len--)
			*--cp_dst = *--cp_src;
	}
	else
		while (len--)
			*cp_dst++ = *cp_src++;
	return (dst);
}

/*
DESCRIPTION: The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
RETURN VALUES: The memmove() function returns the original value of dst.
*/
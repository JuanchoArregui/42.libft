/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:23:03 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/16 16:04:45 by jarregui         ###   ########.fr       */
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

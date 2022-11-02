/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:42:46 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/02 19:01:08 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	while (s[x] != '\0')
	{
		if ((s[x] == (char)c))
			y = x;
		x++;
	}
	if (s[x] == (char)c)
		y = x;
	if (y != -1)
		return ((char *)s + y);
	return (NULL);
}

/*
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null
     character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the
     string.
*/
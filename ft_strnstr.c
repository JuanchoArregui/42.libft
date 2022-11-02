/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:42:12 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/02 18:59:01 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	size_t	i;

	if (*needle == 0)
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (*haystack && i <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, i)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/*
DESCRIPTION
     The strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.

     The strcasestr() function is similar to strstr(), but ignores the case of both strings.

     The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than
     len characters are searched.  Characters that appear after a `\0' character are not searched.  Since the strnstr() function is a
     FreeBSD specific API, it should only be used when portability is not a concern.

     While the strcasestr() function uses the current locale, the strcasestr_l() function may be passed a locale directly. See xlocale(3)
     for more information.

RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to
     the first character of the first occurrence of needle is returned.
*/
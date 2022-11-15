/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:24:06 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/15 13:20:30 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i++;
	}
	return(b);
}

/*
DESCRIPTION
     The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

RETURN VALUES
     The memset() function returns its first argument.
*/


/*This function is a copy of the memset function in the string.h library.
* According to the man the memset function writes len bytes of value c
* (converted to an unsigned char) to the string b. This function returns it's
* first argument.
* We start by creating a char string of p. This is what we will use to hold
* a casted version of our void b parameter. We set p equal to a char cast
* version of b. If you are unfamiliar with type casting, it is a way to
* convert a variable from one data type to another data type. We then
* start our loop. ft_memset nees to trust the size of len that is passed
* into it's parameter and it needs to work on a general piece of memory,
* not just a '\0' terminated string, so we can not have our loop's
* condition based on the usual idea that we will reach the end of a string.
* So in this case we say so long as the given len is greater than 0 we
* will continue the loop. We then move backwards through the string p
* placing the int c inside of each index position. We do len - 1 because
* we are compensating for the terminating '\0' at the end of the string
* that we do not want to replace. We decrement len and then start the
* loop over again until len is no longer greater than 0. We then return
* b.*/


// int main(void)
// {
// 	// Fill 8 characters starting from str[13] with '.'
// 	char str[50] = "GeeksForGeeks is for programming geeks.";

// 	printf("\nBefore ft_memset(): %s\n", str);
// 	ft_memset(str + 13, '.', 8*sizeof(char));
// 	printf("After ft_memset():  %s", str);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:34:36 by juancho           #+#    #+#             */
/*   Updated: 2021/07/14 15:02:33 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long			nb;
	int				sign;
	unsigned int	i;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return ((int)(sign * nb));
}

/*This is a recreation of the atoi function in C. We take a string of
characters that are supposed to be a number converted into an int.
According to the man, "The atoi function converts the initial portion of
the string point to by str to int representation."

We start off by creating three variables. The first is what will hold our
result that is to be returned. We use long because it is guaranteed to
be able to store, at the very least, values that lie within the range of
-2147483647 and 2147483647. Sign will be what we use to turn the int
negative in the event that its a negative number that is put in the
string. We have it as a long so we can multiply our result by it in the
end. We next have an unsigned int i, which will be the counter for our
string. In order to be able to compensate for an incredibly long string
we use an unsigned int to be able to use its extended positive range it
has over a signed int. We will set all of them to 0 except for our sign
which we set at 1 to use based based on the appearance of a negative
symbol in our string.

The first thing we want our function to do is make sure to skip over any
kind of spacing that could be found at the beginning of the string.
Once past the extra spacing, if it exists, we are checking to see if there
*is a negative symbol at the beginning of the number we will be converting.
if we see a negative symbol or a positive symbol we adjust accordingly. If
it's negative we set our sign equal to -1 to multiply to our result when 
we return it.

Then we convert our string of characters from char to int so long as they
are numbers. If the character we are currently on is a number, we
converted it to its ascii numerical value. For the first character res
is always set currently at 0. We multiply 10 immediately by our res to
set up the digit placement where it should be. We then subtract the
numerical value of the character 0 on the ascii table from our currently
character number. This sets it to its ascii numerical value. We then
start our loop over and continue until we hit a character that is not a
number.

Last we return the res value multiplied by the sign value to return the
number based on whether it was negative or not. NOTE: We have int in
parenthesis to cast the rest *sign into a int so it can be returned as
an int.*/

/* int	main (void)
{
	printf("Erróneo con atoi: %d\n", atoi("   -1234ab567"));
	printf("Erróneo con ft_atoi: %d\n", ft_atoi("   ---++--1234ab567"));
	printf("\n");
	printf("Número Ok con atoi: %d\n", atoi("-19923492"));
	printf("Número ok con ft_atoi: %d\n", ft_atoi("      -----++--19923492"));
	return (0);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juancho <juancho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:34:36 by juancho           #+#    #+#             */
/*   Updated: 2021/05/20 19:35:48 by juancho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
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
	return (sign * nb);
}

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
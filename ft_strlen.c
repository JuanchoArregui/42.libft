/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 09:29:29 by jarregui          #+#    #+#             */
/*   Updated: 2021/07/14 12:38:15 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* int	main(void)
{
	printf("longitud con strlen: %lu\n", strlen("hola \nque ase"));
	printf("longitud con ft_strlen: %d\n", ft_strlen("hola \nque ase"));
	return (0);
} */
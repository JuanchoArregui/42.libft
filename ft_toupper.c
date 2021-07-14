/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:45:08 by jarregui          #+#    #+#             */
/*   Updated: 2021/07/14 12:45:52 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
char	*ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}



// int	main(void)
// {
// 	char	*str;

// 	str = (char *)malloc(100);
// 	strcpy(str, "&&&& AQU1habia TEXTOynum3r0y_db3_salir#TODO en MaYusculas!");
// 	printf("%s\n", str);

// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
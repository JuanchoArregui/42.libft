/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:45:08 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/02 19:50:39 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}


// esto es de mi función antigua ft_struppercase. revisar este main --->
//
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
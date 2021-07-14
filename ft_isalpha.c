/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:01:28 by jarregui          #+#    #+#             */
/*   Updated: 2021/07/14 12:02:34 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!(((str[i] >= 'a') && (str[i] <= 'z'))
				|| ((str[i] >= 'A') && (str[i] <= 'Z'))))
			return (0);
		i++;
	}
	return (1);
}


// int	main(void)
// {
// 	char	*str;
// 	char	*str2;

// 	str = "EstEesMij0dido string";
// 	str2 = "lkjdsfvyiuyyHJGJHFTDTJHV";
// 	printf("Esto debe devolver 0: %d\n", ft_str_is_alpha(str));
// 	printf("Esto debe devolver 1: %d\n", ft_str_is_alpha(str2));
// 	printf("Esto tb debe devolver 1: %d\n", ft_str_is_alpha(""));
// 	return (0);
// }
#include<unistd.h>
#include<stdio.h>
#include <string.h>


int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!((str[i] >= '0') && (str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}


int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;
	char	*str2;

	str = "O123456789";
	str2 = "0123456789";
	printf("Esto debe devolver 0: %d\n", ft_str_is_numeric(str));
	printf("Esto debe devolver 1: %d\n", ft_str_is_numeric(str2));
	printf("Esto tb debe devolver 1: %d\n", ft_str_is_numeric(""));
	return (0);
}
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}


char	*ft_strlowcase(char *str);

int	main(void)
{
	char	*str;

	str = (char *)malloc(100);
	strcpy(str, "AQU1habiaTEXTOy_db3_salir # TODOen minusculas");
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
	free(str);
	return (0);
}
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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



int	main(void)
{
	char	*str;

	str = (char *)malloc(100);
	strcpy(str, "&&&& AQU1habia TEXTOynum3r0y_db3_salir#TODO en MaYusculas!");
	printf("%s\n", str);

	printf("%s\n", str);
	free(str);
	return (0);
}
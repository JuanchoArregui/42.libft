#include <stdio.h>

void *ft_memset(void *ptr, int c, unsigned int len)
{
	unsigned int i;
	unsigned char *pos = ptr;

	i = 0;
	while (i < len)
	{
		*pos = c;
		pos++;
		i++;
	}
	return(pos);
}

int main(void)
{
	// Fill 8 characters starting from str[13] with '.'
	char str[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore ft_memset(): %s\n", str);
	ft_memset(str + 13, '.', 8*sizeof(char));
	printf("After ft_memset():  %s", str);
	return (0);
}
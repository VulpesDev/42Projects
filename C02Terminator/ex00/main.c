#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[20];
	char	*src;

	src = "Hello!";
	ft_strcpy(dest, src);
	printf("%s", "EX00: ");
	printf("%s", "Expected output: Hello!\nActual output: ");
	printf("%s", dest);
	printf("%c", '\n');
}

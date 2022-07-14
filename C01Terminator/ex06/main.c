#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "123456789";
	printf("%s", "\nEX06: ");
	printf("%s", ft_strlen(str) == 9 ? "OK\n" : "KO\n");
	return (0);
}

#include<stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "Hello!";
	printf("%s", "EX05: \n");
	printf("%s", "Expected output: ");
	printf("%s", str);
	printf("%c", '\n');
	ft_putstr(str);
	return (0);
}

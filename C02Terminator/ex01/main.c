#include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	main(void)
{
	char	str1[20];
	char	*str2;

	str2 = "Whatt";
	printf("%s", ft_strncpy(str1, str2, 3));
}

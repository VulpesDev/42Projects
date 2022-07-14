#include<stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[10] = "!abcDefG2";
	char	*str2;
	int	a;
	int	boolean;

	boolean = 1;
	a = 0;
	str2 = "!abcdefg2";
	ft_strlowcase(str);
	while (str[a])
	{
		if (str[a] != str2[a]) boolean = 0;
		a++;
	}
	printf("%s", "EX08: ");
	printf("%s", boolean ? "OK\n" : "KO\n");
	return (0);
}

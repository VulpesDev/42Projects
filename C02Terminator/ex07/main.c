#include<stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[10] = "!abcDefG2";
	char	*str2;
	int	a;
	int	boolean;

	boolean = 1;
	a = 0;
	str2 = "!ABCDEFG2";
	ft_strupcase(str);
	while (str[a])
	{
		if (str[a] != str2[a]) boolean = 0;
		a++;
	}
	printf("%s", "EX07: ");
	printf("%s", boolean ? "OK\n" : "KO\n");
	return (0);
}

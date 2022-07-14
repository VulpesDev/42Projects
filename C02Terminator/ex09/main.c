#include<stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[200] = "r1*pjG[D/?w^$ThB9'Xz'BuyzvRouztpft@**u6";
	char str2[200] = "R1*Pjg[D/?W^$Thb9'Xz'Buyzvrouztpft@**U6";
	int	i;
	int 	boolean;

	i = 0;
	boolean = 1;
	ft_strcapitalize(str);
	while (str[i])
	{
		if (str[i] != str2[i]) boolean = 0;
		i++;
	}
	printf("%s", "EX09: ");
	printf("%s", boolean ? "OK\n" : "KO\n");
	return (0);
}

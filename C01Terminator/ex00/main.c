#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*mbr;
	int	a;

	a = 0;
	mbr = &a;
	ft_ft(mbr);
	printf("%s", "Ex00: ");
	printf("%s", a == 42 ? "OK\n" : "KO\n");
	return (0);
}

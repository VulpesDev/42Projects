#include<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	nbr1;
	int	*nbr2;
	int	**nbr3;
	int	***nbr4;
	int	****nbr5;
	int	*****nbr6;
	int	******nbr7;
	int	*******nbr8;
	int	********nbr9;
	int	*********nbr0;

	nbr1 = 0;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	nbr0 = &nbr9;

	ft_ultimate_ft(nbr0);
	printf("%s", "EX01: ");
	printf("%s", *********nbr0 == 42 ? "OK\n" : "KO\n");
	return (0);
}

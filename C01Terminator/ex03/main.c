#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	divval;
	int	modval;
	int	*div;
	int	*mod;

	a = 10;
	b = 8;
	divval = 0;
	modval = 0;
	div =  &divval;
	mod = &modval;
	ft_div_mod(a, b, div, mod);
	printf("%s", "EX03: ");
	printf("%s", *div == a / b && *mod == a % b ? "OK\n" : "KO\n");
}

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	aval;
	int	bval;
	int	*a;
	int	*b;
	int	sta;
	int	stb;

	aval = 12;
	bval = 10;
	a = &aval;
	b = &bval;
	sta = *a;
	stb = *b;
	ft_ultimate_div_mod(a, b);
	printf("%s", "EX04: ");
	printf("%s", *a == sta / stb && *b == sta % stb ? "OK\n" : "KO\n");
}

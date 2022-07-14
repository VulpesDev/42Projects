#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int	vala;
	int	valb;

	vala = 0;
	valb = 1;
	a = &vala;
	b = &valb;
	ft_swap(a, b);
	printf("%s", "EX02: ");
	printf("%s", (*a == 1 && *b ==0) ? "OK\n" : "KO\n");
	return (0);
}

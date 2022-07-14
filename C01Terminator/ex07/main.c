#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[7] = {0, 1, 4, 5, 1, 5, 8};
	int	tabtch[7] = {8, 5, 1, 5, 4, 1, 0};
	int	i;
	int	boolean;

	boolean = 1;
	ft_rev_int_tab(tab, 7);
	i=7;
	while(i--)
	{
		if(tabtch[i] != tab[i]) boolean = 0;
	}
	printf("%s", "EX07: ");
	printf("%s", boolean == 1 ? "OK\n" : "KO\n");
	return (0);
}

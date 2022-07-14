#include<stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int	tab[10]= {0,9,2,1,3,4,6,5,8,7};
	int	ctab[10]= {0,1,2,3,4,5,6,7,8,9};
	int	size;
	int	boolean;

	boolean = 1;
	size = 10;
	ft_sort_int_tab(tab, size);
	while(size--)
	{
		if(tab[size] != ctab[size]) boolean = 0;
	}
	printf("%s", "EX08: ");
	printf("%s", boolean ? "OK\n" : "KO\n");
	return(0);
}

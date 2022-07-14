#include<stdio.h>

int	sum_of(int num)
{
	if(num != 0)
		num += sum_of(num - 1);
	return (num);
}

int	main(void)
{
	printf("%d", sum_of(5));
	return (0);
}

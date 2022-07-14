#include<stdio.h>

int	strlen_iterative(char *str)
{
	int	count;
	
	count = 0;
	while(str[count])
		count++;
	return count;
}
int	strlen_recursive(char *str)
{
	int result;

	result = 1;
	if(*(str + 1))
		result += strlen_recursive(str + 1);
	return result;

}
int	main(void)
{
	char str[50] = "Wahhahahahasr123412";

	printf("%d\n", strlen_iterative(str));
	printf("%d", strlen_recursive(str));
	return (0);
}

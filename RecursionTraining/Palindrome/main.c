#include<stdio.h>

int	is_palindrome(char *num, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if(num[i] != num[(size - 1) - i])
			return 0;
		i++;
	}
	return 1;
}
int	is_palindrome_recursion(char *num, int element, int size)
{
	if (element <= size / 2 - 1)
		return is_palindrome_recursion(num, element + 1, size);
	else if (num[element] != num[(size - 1) - element])
		return 0;
	return 1;
}

int	main(void)
{
	printf("%d\n%d\n%d", is_palindrome_recursion("8008", 0, 4),
		       	is_palindrome_recursion("1322231", 0, 7), is_palindrome_recursion("1212", 0, 4));
	return (0);
}

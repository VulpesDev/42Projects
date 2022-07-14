#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int	boolean;
	
	boolean = 1;
	printf("%s", "EX03: ");
	if(!ft_str_is_numeric("12345")) boolean = 0;
	if(!ft_str_is_numeric("10234005")) boolean = 0;
	if(ft_str_is_numeric("?@#$%12345")) boolean = 0;
	if(ft_str_is_numeric("12sdfas345")) boolean = 0;
	if(!ft_str_is_numeric("")) boolean = 0;
	printf("%s", boolean ? "OK\n" : "KO\n");
	return (0);
}

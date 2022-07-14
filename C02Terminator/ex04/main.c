#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int	boolean;

	boolean = 1;
	printf("%s", "EX04: ");
	if(!ft_str_is_lowercase("sadklafjkz")) boolean = 0;
	if(ft_str_is_lowercase("1sadk1lafjkz1")) boolean = 0;
	if(ft_str_is_lowercase("sadklAfjkz")) boolean = 0;
	if(ft_str_is_lowercase("Zsadklfjkz")) boolean = 0;
	if(ft_str_is_lowercase("sadkl@Afjkz#")) boolean = 0;
	if(!ft_str_is_lowercase("")) boolean = 0;
	printf("%s", boolean ? "OK\n" : "KO\n");
	return (0);
}

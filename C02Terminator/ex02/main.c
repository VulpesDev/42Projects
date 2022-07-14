#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int	boolean;

	boolean = 1;
	printf("%s", "EX02: ");
	if(ft_str_is_alpha("2asdfegq")) boolean = 0;
	if(ft_str_is_alpha("asdfegq!")) boolean = 0;
	if(!ft_str_is_alpha("asdfegq")) boolean = 0;
	if(!ft_str_is_alpha("asdAdAWww")) boolean = 0;
	if(!ft_str_is_alpha("")) boolean = 0;
        printf("%s", boolean ? "OK\n" : "KO\n");
	return (0);
}

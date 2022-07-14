#include<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int	boolean;
	char	non;
	char	non2;
	char	non3[1];
	char	non4[1];
		
	non = 128;
	non2 = 4;
	non3[0] = non;
	non4[0] = non2;
	boolean = 1;
	////////////////////////////////////////////////////////////////
	
	printf("%s", "EX06: ");
	if(ft_str_is_printable(non3)) boolean = 0;
	if(ft_str_is_printable(non4)) boolean = 0;
	if(!ft_str_is_printable("ASD4FQEGSAD2W")) boolean = 0;
	if(!ft_str_is_printable("")) boolean = 0;
	printf("%s", boolean ? "OK\n" : "KO\n");
	return (0);
}

#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int	boolean;

	boolean = 1;
	printf("%s", "EX05: ");
	if(!ft_str_is_uppercase("ASDFQEGSADW")) boolean = 0;
	if(ft_str_is_uppercase("aSDFQEGSaDW")) boolean = 0;
	if(ft_str_is_uppercase("ASDF!QEGSADW")) boolean = 0;
	if(ft_str_is_uppercase("ASD4FQEGSAD2W")) boolean = 0;
	if(!ft_str_is_uppercase("")) boolean = 0;
	printf("%s", boolean ? "OK\n" : "KO\n");
	return (0);
}

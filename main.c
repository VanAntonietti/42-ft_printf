#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char	*str;
	int		i;
	int		j;

	i = 69;
	j = 24;
	str = "Séquiçu";

	printf("teste\n");
	ft_printf("teste\n");
	
	// char teste[] = "teste";
	// char teste2[] = "luiz";
	// char teste3[] = "sabao";
	// // int number = 30;
	// // printf("%.90f\n",10.92);
	// // printf("%c\n", 't');
	// // printf("<%-10s>\n", "teste");
	// // printf("%p\n", teste);
	// // printf("%x\n", 124312);
	// // printf("%#X\n", 123123);
	// // printf("%i\n", 16);
	// //  printf("%u\n",-1);
	// // printf("%x\n", 15);
	// // printf("%X\n", 15);
	// // printf("%%\n");
	// // printf("%-5s\n","pokemon");
	// // printf("%#x\n", 15);
	// // printf("%d\n", -15);
	// // printf("<%20f>\n",(float) 15);
	// // printf("<%+020.10f>\n", 15.92);
	// // printf("%+0d\n", 15);
	// // printf("%+.2f\n", 15.21);
	// // printf("%-10da\n", number);
	// // printf("%10da\n", number);
	// // printf("%-#2f\n",(float) number);
	// // printf("%#f\n", (float) number);
	// // printf(" = size :%d\n",printf("%-s", teste));
	// // printf("= %d\n",printf("%-22s.", teste));
	// // printf("= %d\n",printf("%22s.", teste));
	// printf("TESTE STRING\033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%-22s>", teste));
	// printf(" len = %d\n",printf("Origin =<%-22s>", teste));
	// printf(" len = %d\n",ft_printf("MyFunc =<%22s>", teste));
	// printf(" len = %d\n",printf("Origin =<%22s>", teste));
	
	// printf("\033[1;0m\nTESTE MULTI STRING\033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%-7s> <%-7s> <%-7s>", teste,teste3, teste2));
	// printf(" len = %d\n",printf("Origin =<%-7s> <%-7s> <%-7s>",teste, teste3, teste2));
	// printf(" len = %d\n",printf("Origin =<%22s> <%22s> <%22s>",teste));
	// printf(" len = %d\n",ft_printf("MyFunc =<%22s> <%22s> <%22s>",teste));
	
	// printf("\033[1;0m\nTESTE CHAR\033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%2c>", 'L'));
	// printf(" len = %d\n",printf("Origin =<%2c>", 'L'));
	// printf(" len = %d\n",ft_printf("MyFunc =<%-5c>", 'a'));
	// printf(" len = %d\n",printf("Origin =<%-5c>", 'a'));

	// printf("\033[1;0m\nTESTE MULT CHAR\033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%2c> <%2c> <%2c>", 'L', 'a', 'b'));
	// printf(" len = %d\n",printf("Origin =<%2c> <%2c> <%2c>", 'L', 'a', 'b'));
	// printf(" len = %d\n",ft_printf("MyFunc =<%-5c> <%-5c> <%-5c>", 'a'));
	// printf(" len = %d\n",printf("Origin =<%-5c> <%-5c> <%-5c>", 'a'));
	
	// printf("\033[1;0m\nTESTE ADRESS\033[1;32m\n");
	// printf(" len = %d\n",printf("Origin =<%-20p>", teste));
	// printf(" len = %d\n",ft_printf("MyFunc =<%-20p>", teste));
	// printf(" len = %d\n",printf("Origin =<%20p>", teste));
	// printf(" len = %d\n",ft_printf("MyFunc =<%20p>", teste));

	// printf("\033[1;0m\nTESTE MULTI ADRESS\033[1;32m\n");
	// printf(" len = %d\n",printf("Origin =<%-20p> <%-20p> <%-20p>", teste, teste3, teste2));
	// printf(" len = %d\n",ft_printf("MyFunc =<%-20p> <%-20p> <%-20p>",teste, teste3, teste2));
	// printf(" len = %d\n",printf("Origin =<%20p> <%20p> <%20p>",teste));
	// printf(" len = %d\n",ft_printf("MyFunc =<%20p> <%20p> <%20p>", teste));
}
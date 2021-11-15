#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	char	*ptr;
	char	*str;
	char	*chr;
	char	*sri;

	str = "";
	ptr = "Ahhhhhhhhhhhhh";
	chr = "Piru";
	sri = "UltimateTeste";
	

	printf("%d\n", printf("teste%c,%c,%c\n", 'p', 'a', 'u'));
	printf("%d\n", ft_printf("teste%c,%c,%c\n", 'p', 'a', 'u'));
	
	ft_putchar_fd('\n', 1);
	
	printf("%d\n", printf("teste%d,%d,%d\n", 1212351234, -1234, -5678));
	printf("%d\n", ft_printf("teste%d,%d,%d\n", 1212351234, -1234, -5678));
	
	ft_putchar_fd('\n', 1);
	
	printf("%d\n", printf("teste%i,%i,%i\n", 1212351234, -1234, -5678));
	printf("%d\n", ft_printf("teste%i,%i,%i\n", 1212351234, -1234, -5678));

	ft_putchar_fd('\n', 1);

	printf("%d\n", printf("teste%%,%c,%d,%s\n", 'p', 1234, sri));
	printf("%d\n", ft_printf("teste%%,%c,%d,%s\n", 'p', 1234, sri));

	ft_putchar_fd('\n', 1);

	printf("%d\n", printf("teste%p,%p,%p,%p\n", str, ptr, chr, sri));
	printf("%d\n", ft_printf("teste%p,%p,%p,%p\n", str, ptr, chr, sri));

	ft_putchar_fd('\n', 1);
	
	printf("%d\n", printf("teste%s,%s,%s\n", str, ptr, chr));
	printf("%d\n", ft_printf("teste%s,%s,%s\n", str, ptr, chr));
	
	ft_putchar_fd('\n', 1);
	
	printf("%d\n", printf("teste%u,%u,%u\n", 1212351234, -1234, -5678));
	printf("%d\n", ft_printf("teste%u,%u,%u\n", 1212351234, -1234, -5678));
	
	ft_putchar_fd('\n', 1);
	
	printf("%d\n", printf("teste%x,%x,%x,%x\n", 1, 6, 12, 15));
	printf("%d\n", ft_printf("teste%x,%x,%x,%x\n", 1, 6, 12, 15));
	
	ft_putchar_fd('\n', 1);

	printf("%d\n", printf("teste%X,%X,%X,%X\n", 1212351234, 1234, 5678, 12345));
	printf("%d\n", ft_printf("teste%X,%X,%X,%X\n", 1212351234, 1234, 5678, 12345));

	ft_putchar_fd('\n', 1);

	printf("%d\n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	printf("%d\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
}	
	
// 	char teste[] = "teste";
// 	char teste2[] = "luiz";
// 	char teste3[] = "sabao";cd 
// 	int number = 30;
// 	printf("%.90f\n",10.92);
// 	printf("%c\n", 't');
// 	printf("<%-10s>\n", "teste");
// 	printf("%p\n", teste);
// 	printf("%x\n", 124312);
// 	printf("%#X\n", 123123);
// 	printf("%i\n", 16);
// 	printf("%u\n",-1);
// 	printf("%x\n", 17);
// 	printf("%X\n", 17);
// 	printf("%%\n");
// 	printf("%-5s\n","pokemon");
// 	printf("%#x\n", 15);
// 	printf("%d\n", -15);
// 	printf("<%20f>\n",(float) 15);
// 	printf("<%+020.10f>\n", 15.92);
// 	printf("%+0d\n", 15);
// 	printf("%+.2f\n", 15.21);
// 	printf("%-10da\n", number);
// 	printf("%10da\n", number);
// 	printf("%-#2f\n",(float) number);
// 	printf("%#f\n", (float) number);
// 	printf(" = size :%d\n",printf("%-s", teste));
// 	printf("= %d\n",printf("%-22s.", teste));
// 	printf("= %d\n",printf("%22s.", teste));
// 	printf("TESTE STRING\033[1;32m\n");
// 	printf(" len = %d\n",ft_printf("MyFunc =<%-22s>", teste));
// 	printf(" len = %d\n",printf("Origin =<%-22s>", teste));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%22s>", teste));
// 	printf(" len = %d\n",printf("Origin =<%22s>", teste));
	
// 	printf("\033[1;0m\nTESTE MULTI STRING\033[1;32m\n");
// 	printf(" len = %d\n",ft_printf("MyFunc =<%-7s> <%-7s> <%-7s>", teste,teste3, teste2));
// 	printf(" len = %d\n",printf("Origin =<%-7s> <%-7s> <%-7s>",teste, teste3, teste2));
// 	printf(" len = %d\n",printf("Origin =<%22s> <%22s> <%22s>",teste));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%22s> <%22s> <%22s>",teste));
	
// 	printf("\033[1;0m\nTESTE CHAR\033[1;32m\n");
// 	printf(" len = %d\n",ft_printf("MyFunc =<%2c>", 'L'));
// 	printf(" len = %d\n",printf("Origin =<%2c>", 'L'));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%-5c>", 'a'));
// 	printf(" len = %d\n",printf("Origin =<%-5c>", 'a'));

// 	printf("\033[1;0m\nTESTE MULT CHAR\033[1;32m\n");
// 	printf(" len = %d\n",ft_printf("MyFunc =<%2c> <%2c> <%2c>", 'L', 'a', 'b'));
// 	printf(" len = %d\n",printf("Origin =<%2c> <%2c> <%2c>", 'L', 'a', 'b'));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%-5c> <%-5c> <%-5c>", 'a'));
// 	printf(" len = %d\n",printf("Origin =<%-5c> <%-5c> <%-5c>", 'a'));
	
// 	printf("\033[1;0m\nTESTE ADRESS\033[1;32m\n");
// 	printf(" len = %d\n",printf("Origin =<%-20p>", teste));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%-20p>", teste));
// 	printf(" len = %d\n",printf("Origin =<%20p>", teste));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%20p>", teste));

// 	printf("\033[1;0m\nTESTE MULTI ADRESS\033[1;32m\n");
// 	printf(" len = %d\n",printf("Origin =<%-20p> <%-20p> <%-20p>", teste, teste3, teste2));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%-20p> <%-20p> <%-20p>",teste, teste3, teste2));
// 	printf(" len = %d\n",printf("Origin =<%20p> <%20p> <%20p>",teste));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%20p> <%20p> <%20p>", teste));
// }
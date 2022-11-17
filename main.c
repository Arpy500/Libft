#include <stdio.h>
#include "libft.h"

int main(void)
{
	// VARIABLES
	char *str1 = "0123456789";
	char *str2 = "";
	char *str3 = "abc";
	char mem1[] = "*\0\0\0";
	int mem2;
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------


	// ft_isalpha
	printf("ft_isalpha tests:\n\tft_isalpha('j') : %d\n\tft_isalpha('%%') : %d\n\n", ft_isalpha('j'), ft_isalpha('%'));
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_isdigit
	printf("ft_isdigit tests:\n\tft_isdigit('5') : %d\n\tft_isdigit('f') : %d\n\n", ft_isdigit('5'), ft_isdigit('f'));
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_isalnum
	printf("ft_isalnum tests:\n\tft_isalnum('I') : %d\n\tft_isalnum('0') : %d\n\tft_isalnum('^') : %d\n\n", ft_isalnum('I'), ft_isalnum('0'), ft_isalnum('^'));
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_isascii
	printf("ft_isascii tests:\n\tft_isascii('@') : %d\n\tft_isascii('\\t') : %d\n\tft_isascii(128) : %d\n\n", ft_isascii('@'), ft_isascii('\t'), ft_isascii(128));
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_isprint
	printf("ft_isprint tests:\n\tft_isprint(' ') : %d\n\tft_isprint(127) : %d\n\n", ft_isprint(' '), ft_isprint(127));
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_strlen
	printf("ft_strlen tests:\n\tft_strlen(\"%s\") : %zu\n\tft_strlen(\"%s\") : %zu\n\n", str1, ft_strlen(str1), str2, ft_strlen(str2));
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_memset

	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_bzero
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_memcpy
	printf("ft_memcpy tests:\n\tft_memcpy(&mem2, mem1, 4) : mem2 = %d\n\n", *(int *)ft_memcpy((void *)&mem2, (void *)mem1, 4));
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_memmove
	printf("ft_memmove tests:\n\t%s", ft_memmove(str1, str3, 3));
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_strlcpy
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------

}

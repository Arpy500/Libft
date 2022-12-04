#include <stdio.h>
#include "libft.h"

int main(void)
{
	// VARIABLES
	char *str0 = "*Omae wa mou*";
	char *str1 = "0123456789";
	char *str1_2 = "9876543210";
	char *str2 = "";
	char str3[] = "0123456789";
	char str4[11];
	char str5[] = "Hello World";
	char str6[] = "4242424242";
	char str7[3] = "Hi";
	char str8[30] = "42Lisboa";
	char mem1[] = "*\0\0\0"; // 00000000 00000000 00000000 00101010			Note: bits menos significativos guardados
	int mem2;																// nos endereços mais baixos (little endian)
	int mem3 = 858927408; // 00110011 00110010 00110001 00110000 = '3' '2' '1' '0'
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


	// ft_isalpha
	printf("ft_isalpha tests:\n\tft_isalpha('j') : %d\n\tft_isalpha('%%') : %d\n\n", ft_isalpha('j'), ft_isalpha('%'));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_isdigit
	printf("ft_isdigit tests:\n\tft_isdigit('5') : %d\n\tft_isdigit('f') : %d\n\n", ft_isdigit('5'), ft_isdigit('f'));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_isalnum
	printf("ft_isalnum tests:\n\tft_isalnum('I') : %d\n\tft_isalnum('0') : %d\n\tft_isalnum('^') : %d\n\n", ft_isalnum('I'), ft_isalnum('0'), ft_isalnum('^'));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_isascii
	printf("ft_isascii tests:\n\tft_isascii('@') : %d\n\tft_isascii('\\t') : %d\n\tft_isascii(128) : %d\n\n", ft_isascii('@'), ft_isascii('\t'), ft_isascii(128));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_isprint
	printf("ft_isprint tests:\n\tft_isprint(' ') : %d\n\tft_isprint(127) : %d\n\n", ft_isprint(' '), ft_isprint(127));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_strlen
	printf("ft_strlen tests:\n\tft_strlen(\"%s\") : %zu\n\tft_strlen(\"%s\") : %zu\n\n", str1, ft_strlen(str1), str2, ft_strlen(str2));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_memset
	printf("ft_memset tests:\n\tft_memset(str6, '5', 10) : str6 = \"%s\"\n\n", (char *)ft_memset(str6, '5', 10));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_bzero
	ft_bzero(str5 + 5, 6);
	printf("ft_bzero tests:\n\tft_bzero(str5 + 5, 6) : str5 = \"%s\"\n\n", str5);
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_memcpy
	printf("ft_memcpy tests:\n\tft_memcpy(&mem2, mem1, 4) : mem2 = %d\n\n", *(int *)ft_memcpy(&mem2, mem1, 4));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_memmove
	printf("ft_memmove tests:\n\tft_memmove(str4, str3, 11) : str4 = \"%s\"\n\n", (char *)ft_memmove(str4, str3, 11));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_strlcpy
	printf("ft_strlcpy tests:\n\tft_strlcpy(str7, str8, 0) : %zu\n\tstr7 : %s\n\n", ft_strlcpy(str7, str8, 0), str7);
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// ft_strlcat
	printf("ft_strlcat tests:\n\tft_strlcat(str8, str1, 0) : %zu\n\tstr8 : %s\n\n", ft_strlcat(str8, str1, 0), str8);
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// ft_toupper
	printf("ft_toupper tests:\n\tft_toupper('z') : %c\n\tft_toupper('Z') : %c\n\tft_toupper(42) : %c\n\n", ft_toupper('z'), ft_toupper('Z'), ft_toupper(42));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// ft_tolower
	printf("ft_tolower tests:\n\tft_tolower('Z') : %c\n\tft_tolower('z') : %c\n\tft_tolower(42) : %c\n\n", ft_tolower('Z'), ft_tolower('z'), ft_tolower(42));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// ft_strchr
	printf("ft_strchr tests:\n\tft_strchr(str0, '7') : %s\n\tft_strchr(str0, ' ') : %s\n\tft_strchr(str0,  42) : %s\n\n", ft_strchr(str0, '7'), ft_strchr(str0, ' '), ft_strchr(str0, 42));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_strrchr
	printf("ft_strrchr tests:\n\tft_strrchr(str0, '7') : %s\n\tft_strrchr(str0, ' ') : %s\n\tft_strrchr(str0,  42) : %s\n\n", ft_strrchr(str0, '7'), ft_strrchr(str0, ' '), ft_strrchr(str0, 42));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_strncmp
	printf("ft_strncmp tests:\n\tft_strncmp(str1, str1_2, 10) : %d\n\tft_strncmp(str1_2, str1, 3) : %d\n\tft_strncmp(str2, \"\\0\", 1) : %d\n\n", ft_strncmp(str1, str1_2, 10), ft_strncmp(str1_2, str1, 3), ft_strncmp(str2, "\0", 1));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_memchr
	printf("ft_memchr tests:\n\tft_memchr(str1, '7', 10) : %s\n\tft_memchr(str0, 42, 15) : %s\n\tft_memchr(str0, 150, 15) : %s\n\n", (char *)ft_memchr(str1, '7', 10), (char *)ft_memchr(str0, 42, 15), (char *)ft_memchr(str0, 150, 15));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_memcmp
	printf("ft_memcmp tests:\n\tft_memcmp(str1, &mem3, 4) : %d\n\tft_memcmp(str1+9, str1_2, 2) : %d\n\tft_memcmp(str0, str2, 10) : %d\n\n", ft_memcmp(str1, &mem3, 4), ft_memcmp(str1+9, str1_2, 2), ft_memcmp(str0, str2, 10));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// ft_strnstr
	printf("ft_strnstr tests:\n\tft_strnstr(\"HelloWorld\", \"loW\", 6) : \"%s\"\n\tft_strnstr(\"\", \"42\", 100) :  %s\n\tft_strnstr(\"42Lisboa\", \"\", 0) : \"%s\"\n\n", ft_strnstr("HelloWorld", "loW", 6), ft_strnstr("", "42", 100), ft_strnstr("42Lisboa", "", 0));
	// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
}

#include<stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++----+1234383sknef", "0123456789"));
	
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+01011sknef", "01"));

	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acbca1234383sknef", "abc"));

	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acdca1234383sknef", "abbc"));
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acdca1234383sknef", " abc"));
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acdca1234383sknef", "ab\tc"));
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acdca1234383sknef", "abc"));
	return (0);
}

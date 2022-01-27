#include<stdio.h>

int	ft_atoi(const char *str);

int	main(int ac, char **av)
{
	int num;

	num = ft_atoi(av[1]);
	printf("%d\n",num);
	return (0);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
#include "ft_stock_str.h"
#include<stdio.h>

int	main(int ac, char **av)
{
	t_stock_str *t;
	int	i;

	i = 0;
	t = ft_strs_to_tab(ac, av);
	while (t[i].str)
	{
		printf("size = %d\n", t[i].size);
		printf("str = %s\n", t[i].str);
		printf("copy = %s\n", t[i].copy);
		i++;
	}
	return (0);
}

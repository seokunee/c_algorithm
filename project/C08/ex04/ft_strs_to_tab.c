#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		n;
	int		l;

	l = 0;
	n = 0;
	while (src[l])
		l++;
	ptr = malloc(sizeof(src) * l + 1);
	if (ptr == NULL)
		return (NULL);
	while (src[n])
	{
		ptr[n] = src[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		tab[i].str = ft_strdup(av[i]);
		if (tab[i].str == NULL || tab[i].copy == NULL)
			return (NULL);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

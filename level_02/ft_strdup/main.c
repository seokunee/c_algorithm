#include<unistd.h>
#include<stdlib.h>

char *ft_strdup(char *src);

int	main(int ac, char **av)
{
	int i;
	char * strdup;
	
	i = 0;

	strdup = ft_strdup(av[1]);	
	while (strdup[i])
	{
		write(1, &strdup[i], 1);
		i++;
	}
	
	free(strdup);
	return (0);
}

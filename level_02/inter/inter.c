#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (ac == 3)
	{
		while(av[1][i])
		{
			while(av[2][j])
			{
				if(av[1][i] == av[2][j] && av[1][i] > 32)
				{
					write(1, &av[1][i], 1);
					break;
				}
				j++;
			}
			j = 0;
			k = i + 1;
			while(av[1][k])
			{
				if (av[1][i] == av[1][k])
					av[1][k] = '1';
				k++;
			}
			k = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

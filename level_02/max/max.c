#include<stdio.h>

int	main(void)
{
	int i;
	int tmp;
	int ar[5] = {2, 1, 5, 7, 9};
	int length;

	length = 5;
	i = 1;
	tmp = ar[0];
	
	while (i <= length - 1)
	{
		if (tmp < ar[i])
		{
			tmp = ar[i];
		}
		i++;
	}
	printf("%d\n", tmp);
	return (0);
}

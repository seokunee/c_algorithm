#include<stdio.h>
char	**ft_split(char *str, char *charset);
int	main(void)
{
	char **arr;
	char str[] = "  hello  my name is   \t seokhun  choi";
	int	i;

	i = 0;
	arr = ft_split(str, " ");
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}

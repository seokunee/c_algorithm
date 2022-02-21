int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (tab[i] > tab[j])
				return (
			j++;
		}
		i++;
	}
}

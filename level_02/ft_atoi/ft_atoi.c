int	ft_atoi(const char *str)
{
	int i;
	int num;	
	int n;

	i = 0;
	n = 1;
	num = 0;

	while (str[i] <=32)
	{
		i++;
	}
	if (str[i] == '-')
	{
		n *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += str[i] - 48;	
		i++;
	}
	return (num * n);
}

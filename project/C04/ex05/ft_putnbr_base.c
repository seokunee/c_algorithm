#include<unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check_extra_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	base_len = ft_strlen(base);
	i = 0;
	while (i < base_len - 1)
	{
		if (base_len < 2)
			return (1);
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] <= 32 || base[i] > 126))
			return (1);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	find_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	n;

	n = 1;
	i = 0;
	result = 0;
	if (check_extra_base(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (find_base(base, str[i]) != -1)
	{
		result *= ft_strlen(base);
		result += find_base(base, str[i]);
		i++;
	}
	return (result * n);
}


#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned int nb)
{
	ft_putchar("0123456789abcdef"[nb / 16]);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

void	ft_puthex_char(unsigned char *str, unsigned int add)
{
	int	i;

	i = 0;
	while (str[i + add] && i < 16)
	{
		ft_puthex(str[i + add]);
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	ft_putstr(unsigned char *str, unsigned int add)
{
	unsigned int	i;

	i = 0;
	while (str[i + add] && i < 16)
	{
		if (str[i + add] < 32 || str[i + add] > 126)
		{
			write(1, ".", 1);
			i++;
		}
		else
		{
			write(1, &str[i + add], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int		j;

	i = 0;
	if(size == 0)
		return (0);
	while (i < size)
	{
		j = 7;
		while (j > 0)
		{
			ft_puthex((unsigned long long)(addr + i) >> j * 8 & 0xff);
			j--;
		}
		write(1, ": ", 2);
		ft_puthex_char((unsigned char *)addr, i);
		ft_putstr((unsigned char *)addr, i);
		i += 16;
	}
	return (addr);
}

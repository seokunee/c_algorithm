/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeseoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:17:37 by jaeseoki          #+#    #+#             */
/*   Updated: 2022/02/05 16:57:36 by jaeseoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void  print(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == x && j == y))
		ft_putchar('A');
  else if ((i == x && j == 1) || (i == 1 && j == y))
		ft_putchar('C');
	else if ((i > 1 && i < x) && (j == 1 || j == y))
		ft_putchar('B');
	else if ((i == 1 || i == x) && (j > 1 && j < y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	j = 1;
	if (x > 0 || y > 0)
	{
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
        print(i, j, x , y);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
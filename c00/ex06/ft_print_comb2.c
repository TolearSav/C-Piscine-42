/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuelen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:54:42 by lsuelen-          #+#    #+#             */
/*   Updated: 2022/07/18 20:03:54 by lsuelen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_insert(int num1);

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			ft_insert(num1);
			ft_putchar(' ');
			ft_insert(num2);
			if (num1 == 98 && num2 == 99)
			{
				return ;
			}
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
	}
}

void	ft_insert(int num1)
{
	if (num1 < 10)
	{
		ft_putchar('0');
		ft_putchar(num1 + '0');
	}
	else
	{
		ft_putchar(num1 / 10 + '0');
		ft_putchar(num1 % 10 + '0');
	}
}

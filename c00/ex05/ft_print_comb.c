/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuelen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:38:01 by lsuelen-          #+#    #+#             */
/*   Updated: 2022/07/12 22:21:38 by lsuelen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if (!(num1 == '7' && num2 == '8' && num3 == '9'))
					write(1, ", ", 2);
				num3++;
			}	
		num2++;
		}
	num1++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuelen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:53:24 by lsuelen-          #+#    #+#             */
/*   Updated: 2022/07/18 21:10:58 by lsuelen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	n;
	int	lim;

	lim = (size / 2);
	size--;
	n = 0;
	while (n < lim)
	{
		aux = tab[n];
		tab[n] = tab[size - n];
		tab[size - n] = aux;
		n++;
	}
}

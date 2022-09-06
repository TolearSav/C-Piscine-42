/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuelen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 23:52:35 by lsuelen-          #+#    #+#             */
/*   Updated: 2022/07/20 23:52:41 by lsuelen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	while (str[i] != '\0')
	{
		if (next == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (next == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 122)
		{
			next = 1;
		}
		else
		{
			next = 0;
		}
		i++;
	}
	return (str);
}

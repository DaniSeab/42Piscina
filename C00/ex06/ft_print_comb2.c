/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:08:09 by dlima-se          #+#    #+#             */
/*   Updated: 2022/07/18 19:43:54 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char dez, char uni)
{
	write(1, &dez, 1);
	write(1, &uni, 1);
}

void	ft_numtochar(int number)
{
	char	dez;
	char	uni;

	if (number <= 9)
	{
		uni = number + 48;
		ft_putchar('0', uni);
	}
	else
	{
		dez = (number / 10) + 48;
		uni = (number % 10) + 48;
		ft_putchar(dez, uni);
	}
}

void	ft_print_comb2(void)
{
	int		first;
	int		second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_numtochar(first);
			write(1, " ", 1);
			ft_numtochar(second);
			if (first != 98)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:36:27 by dlima-se          #+#    #+#             */
/*   Updated: 2022/07/28 22:50:44 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
	{
		res = res * (ft_recursive_power(nb, (power - 1)));
		return (res);
	}
}

/*
#include <stdio.h>

int main()
{
    int nb;
    int res;
	int	power;

    nb = 5;
	power = 4;
    res = ft_recursive_power(nb, power);
    printf ("%d\n", res);
}
*/

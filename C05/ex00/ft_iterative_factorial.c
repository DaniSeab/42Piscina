/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:31:48 by dlima-se          #+#    #+#             */
/*   Updated: 2022/07/28 19:31:51 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}

/*
#include <stdio.h>
int main()
{
    int nb;
    int res;

    nb = 5;
    res = ft_iterative_factorial(nb);
    printf ("%d\n", res);
}
*/
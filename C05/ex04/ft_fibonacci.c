/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:32:59 by dlima-se          #+#    #+#             */
/*   Updated: 2022/07/28 19:33:00 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	f;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		f = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (f);
	}
	else
		return (-1);
}

/*
#include <stdio.h>

int main()
{
    int nb;
    int res;

    nb = 5;
    res = ft_fibonacci(nb);
    printf ("%d\n", res);
}
*/

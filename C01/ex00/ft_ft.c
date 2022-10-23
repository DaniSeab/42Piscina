/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:02:19 by dlima-se          #+#    #+#             */
/*   Updated: 2022/08/26 22:40:54 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr, int c)
{
	printf("Valor que *nbr segura (o mesmo endereço que ptr tinha) = %p\n\n", nbr);
	*nbr = 42;
	printf("Endereço de *nbr, depois de entrar no ft_ft = %p\n\n", &nbr);
	printf("Endereço de b, depois de entrar no ft_ft = %p\n\n", &c);
}

int	main(void)
{
	int	a = 5;
	int b = 10;
	int	*ptr = &a;

	printf("\nEndereço de a, do main = %p\n\n", &a);	
	printf("Endereço de *ptr, do main = %p\n\n", &ptr);
	printf("Endereço de b, do main = %p\n\n", &b);
	ft_ft(ptr, b);	
}
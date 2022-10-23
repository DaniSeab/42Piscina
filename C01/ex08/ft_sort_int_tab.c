/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:11:36 by dlima-se          #+#    #+#             */
/*   Updated: 2022/07/21 19:12:14 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;
	int	**tabtab;

	tabtab = tab;
	i = 0;
	j = size - 1;
	while (j >= 0)
	{
		while (i < (size - 1))
		{
			if (*(tab + 1) < *tab)
			{
				swap = *(tab + 1);
				*(tab + 1) = *tab;
				*tab = swap;
			}
			tab++;
			i++;
		}
	i = 0;
	tab = tabtab;
	j--;
	}
}

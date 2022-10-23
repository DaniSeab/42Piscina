/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:44:21 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/07 13:56:53 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	main(int argc, char *argv[])
{
	char	i;
	char	j;
	char	swap;
	char	**tabtab;

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

while (i < argc)
{
j = 0;
if (argv[i][j] > argv[i + 1][j])
{
	*swap = *argv[i];
	*argv[i] = *argv[i + 1];
}
}

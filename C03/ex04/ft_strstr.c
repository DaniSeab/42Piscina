/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:44:45 by dlima-se          #+#    #+#             */
/*   Updated: 2022/07/27 09:44:52 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_needleckeck(char *str, char *to_find, int i)
{
	int	j;	

	j = 0;
	while (str[i] == to_find[j] && to_find[j] != '\0')
	{
		i++;
		j++;
	}
	if (to_find[j] == '\0')
	{
		return (1);
	}
	else if (str[i] != to_find[j])
	{
		return (0);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*c;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			c = &str[i];
			if (ft_needleckeck(str, to_find, i) == 1)
			{
				return (c);
			}
		}
		i++;
	}
	return (0);
}

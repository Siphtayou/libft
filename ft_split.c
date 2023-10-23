/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:31:30 by agilles           #+#    #+#             */
/*   Updated: 2023/10/23 15:24:48 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (s[i++])
	{
		if (s[i] == c && i == 0)
		{
			while (s[i + 1] == c)
			{
				i++;
				if (s[i] == '\0')
					return (count);
			}
		}
		else if (s[i] == c || s[i + 1] == '\0')
		{
			count++;
			while (s[i + 1] == c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	
}

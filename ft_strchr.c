/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:16:38 by agilles           #+#    #+#             */
/*   Updated: 2023/10/19 17:07:57 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)s;
	while (p[i])
	{
		if (p[i] == (char)c)
			return (p + i);
		i++;
	}
	if (p[i] == '\0' && (char)c == '\0')
		return (p + i);
	return (NULL);
}

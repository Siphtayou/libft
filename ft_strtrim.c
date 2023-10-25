/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:49:48 by agilles           #+#    #+#             */
/*   Updated: 2023/10/25 16:39:45 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	char	*res;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end < start && ft_strchr(set, s1[end]))
		end--;
	res = malloc((end - start + 2) * sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, s1 + start, (end - start + 2));
	res[end - start + 1] = '\0';
	return (res);
}

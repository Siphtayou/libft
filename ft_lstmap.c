/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:26:24 by agilles           #+#    #+#             */
/*   Updated: 2023/10/27 15:50:53 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;

	if (!lst || !f || !del)
		return (0);
	new = 0;
	while (lst)
	{
		current = ft_lstnew((f)(lst->content));
		if (!current)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, current);
		lst = lst->next;
	}
	return (new);
}

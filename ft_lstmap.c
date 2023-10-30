/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:26:24 by agilles           #+#    #+#             */
/*   Updated: 2023/10/29 18:49:45 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*current;
	t_list	*new;

	if (!lst || !f || !del)
		return (0);
	new = 0;
	while (lst)
	{
		content = (f)(lst->content);
		current = ft_lstnew(content);
		if (!current)
		{
			(del)(content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, current);
		lst = lst->next;
	}
	return (new);
}

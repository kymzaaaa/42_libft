/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:56:56 by kayamaza          #+#    #+#             */
/*   Updated: 2024/05/26 20:18:47 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*r;
	t_list	*new;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	r = ft_lstnew(f(lst->content));
	if (!r)
		return (NULL);
	current = r;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&r, del);
			return (NULL);
		}
		current->next = new;
		current = new;
		lst = lst->next;
	}
	return (r);
}

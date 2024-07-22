/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:28:10 by kayamaza          #+#    #+#             */
/*   Updated: 2024/05/12 21:48:46 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !(*lst) || !del)
		return ;
	while ((*lst))
	{
		next = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		(*lst) = next;
	}
	*lst = NULL;
}

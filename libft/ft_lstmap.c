/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:53:25 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/24 13:36:34 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node_elem;
	t_list	*node_lst;
	t_list	*iter;

	if (lst == NULL || f == NULL)
		return (NULL);
	node_lst = NULL;
	while (lst)
	{
		iter = f(lst->content);
		node_elem = ft_lstnew(iter);
		if (!node_elem)
		{
			free(iter);
			ft_lstclear(&node_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&node_lst, node_elem);
		lst = lst->next;
	}
	return (node_lst);
}

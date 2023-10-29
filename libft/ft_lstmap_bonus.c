/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:53:25 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/25 13:37:19 by danmarqu         ###   ########.fr       */
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

// void	*ft_toupper_lst(void *str)
// {
// 	size_t	i = 0;
// 	char	*s = (char *)str;
// 	while (s[i])
// 	{
// 		if (97 <= s[i] && s[i] <= 122)
// 		{
// 			s[i] = s[i] - 32;
// 		}
// 		i++;
// 	}
// 	return (str);
// }
// void	ft_bzero_lst(void *s)
// {
// 	unsigned char	*str;
// 	size_t	n = ft_strlen((const char *)s);
// 	str = ((unsigned char *)s);
// 	while (n--)
// 	{
// 		*str = 0;
// 		str++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	size_t	i = 1;
// 	t_list *lst = NULL;
// 	while (argc - 1)
// 	{
// 		t_list	*new = ft_lstnew(argv[i]);
// 		ft_lstadd_back(&lst, new);
// 		i++;
// 		argc--;
// 	}
// 	t_list	*new = ft_lstmap(lst, ft_toupper_lst, ft_bzero_lst);
// 	while (lst)
// 	{
// 		ft_putstr_fd(lst->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		lst = lst->next;
// 	}
// 	while (new)
// 	{
// 		ft_putstr_fd(new->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		new = new->next;
// 	}
// }

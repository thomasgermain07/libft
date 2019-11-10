/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 14:33:26 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/10 23:23:40 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*begin;
	t_list		*next;

	if (!lst)
		return (NULL);
	next = lst->next;
	new = ft_lstnew(f(lst->content));
	begin = new;
	ft_lstdelone(lst, del);
	lst = next;
	while (lst)
	{
		next = lst->next;
		new = ft_lstnew(f(lst->content));
		ft_lstadd_back(&begin, new);
		ft_lstdelone(lst, del);
		lst = next;
	}
	return (begin);
}

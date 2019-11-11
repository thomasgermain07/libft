/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:23:57 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/12 00:51:30 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_elem;
	t_list		*new_list;
	t_list		*origin;

	origin = lst;
	if (!lst)
		return (NULL);
	if (!(new_elem = ft_lstnew(f(lst->content))))
		return (NULL);
	new_list = new_elem;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		new_elem = NULL;
	}
	ft_lstclear(&origin, del);
	return (new_list);
}

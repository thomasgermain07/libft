/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:05:17 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/10 23:32:06 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

void	ft_putstr(void *s)
{
	write(1, (char *)s, ft_strlen((char *)s));
}

void	*ft_strupper(void *s)
{
	(void)s;
	return ("Salut");
}

int main(void)
{
	t_list		*block1 = ft_lstnew("Bonsoir");
	t_list		*block2 = ft_lstnew("Tout");
	t_list		*block3 = ft_lstnew("Le");
	t_list		*block4 = ft_lstnew("Monde");
	t_list		*block5 = ft_lstnew("Merci!!");
	t_list		*block6 = ft_lstnew("SuceCul");

	ft_lstadd_back(&block1, block2);
	ft_lstadd_back(&block1, block3);
	ft_lstadd_back(&block1, block4);
	ft_lstadd_back(&block1, block5);
	ft_lstadd_back(&block1, block6);

	t_list		*new = ft_lstmap(block1, &ft_strupper, &ft_putstr);

	while (new)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}

	while (1)
		;
	return (0);
}

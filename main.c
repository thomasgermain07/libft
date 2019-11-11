/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:05:17 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/11 15:39:18 by thgermai         ###   ########.fr       */
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
	for (int i = 0; ((char *)s)[i]; i++)
	{
		if (((char *)s)[i] != '\n' && ((char *)s)[i] != ' ')
			((char *)s)[i]++;
	}
	return (s);
}

int main(void)
{
	t_list		*block1 = ft_lstnew(ft_strdup("Bonsoir "));
	t_list		*block2 = ft_lstnew(ft_strdup("tout le monde "));
	t_list		*block3 = ft_lstnew(ft_strdup("ceci est un "));
	t_list		*block4 = ft_lstnew(ft_strdup("test et challah "));
	t_list		*block5 = ft_lstnew(ft_strdup("ca passe\n"));

	ft_lstadd_back(&block1, block2);
	ft_lstadd_back(&block1, block3);
	ft_lstadd_back(&block1, block4);
	ft_lstadd_back(&block1, block5);

	t_list		*new = ft_lstmap(block1, &ft_strupper, &ft_putstr);

	(void)new;
	// int i = 0;

	// while (new)
	// {
	// 	printf("%s %i\n", (char *)new->content, i++);
	// 	new = new->next;
	// }

	return (0);
}

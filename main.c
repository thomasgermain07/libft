/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:05:17 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/12 00:51:26 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

void	delete_elem(void *content)
{
	printf("deleted elem\n");
	free(content);
}

void	*ft_strupper(void *s)
{
	char		*temp;

	temp = ft_strdup((char *)s);
	for (int i = 0; temp[i]; i++)
	{
		if (temp[i] != '\n' && temp[i] != ' ' && temp[i])
			temp[i]++;
	}
	return (temp);
}

int main(void)
{
	char	*text1 = ft_strdup("Bonsoir a toute");
	char	*text2 = ft_strdup("Bonsoir a toute");
	char	*text3 = ft_strdup("Bonsoir a toute");
	char	*text4 = ft_strdup("Bonsoir a toute");
	char	*text5 = ft_strdup("Bonsoir a toute");

	t_list		*block1 = ft_lstnew(text1);
	t_list		*block2 = ft_lstnew(text2);
	t_list		*block3 = ft_lstnew(text3);
	t_list		*block4 = ft_lstnew(text4);
	t_list		*block5 = ft_lstnew(text5);

	ft_lstadd_back(&block1, block2);
	ft_lstadd_back(&block1, block3);
	ft_lstadd_back(&block1, block4);
	ft_lstadd_back(&block1, block5);

	t_list		*new = ft_lstmap(block1, &ft_strupper, &delete_elem);

	while (new)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}
	return (0);
}

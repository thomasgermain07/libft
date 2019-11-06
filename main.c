/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:05:17 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/06 13:43:33 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "./includes/libft.h"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	char *dst1;
	char *dst2;

	char *ptr1;
	char *ptr2;

	dst1	= strdup("Bonsoir a toute et a tous");
	dst2	= strdup("Wallah ca marche");

	ptr1		= strdup("Bonsoir a toute et a tous");
	ptr2	= strdup("Wallah ca marche");



	printf("%lu\n",ft_strlcat(dst1, dst2, strlen(dst1)));
	printf("%lu\n", strlcat(ptr1, ptr2, strlen(ptr1)));

	return (0);
}

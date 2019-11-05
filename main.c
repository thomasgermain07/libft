/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:05:17 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/05 17:53:51 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	char *str;
	char *str2;

	char *ptr;
	char *ptr2;

	str		= strdup("Bonsoir a toute et a tous");
	str2	= strdup("toute");

	ptr		= strdup("Bonsoir a toute et a tous");
	ptr2	= strdup("toute");

	printf("%s\n", ft_strnstr(str, str2, 30));
	printf("%s\n", strnstr(ptr, ptr2, 30));

	return (0);
}

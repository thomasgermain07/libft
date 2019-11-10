/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:05:17 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/10 10:29:47 by thgermai         ###   ########.fr       */
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

	char *s = "split";

	char **result = ft_split(s, ' ');

	for (int i = 0; result[i]; i++)
		printf("%s\n", result[i]);

	return (0);
}

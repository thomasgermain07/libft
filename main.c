/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:30:24 by thomasgerma       #+#    #+#             */
/*   Updated: 2019/11/04 23:37:43 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int				ft_isalpha(int c);

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	printf("%d\n", ft_isalpha('L'));
	printf("%d\n", isalpha('L'));

	return (0);
}

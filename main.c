/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:05:17 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/07 23:13:46 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#include "./includes/libft.h"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	int fd;

	fd = open("text.txt", O_RDWR);

	ft_putendl_fd("Bonsoir a toute et a tous", fd);

	close(fd);

	return (0);
}

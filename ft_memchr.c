/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:29:25 by thomasgerma       #+#    #+#             */
/*   Updated: 2019/11/04 22:40:09 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while ((*(unsigned char *)s) && i < n)
	{
		if ((*((unsigned char *)s)) == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}

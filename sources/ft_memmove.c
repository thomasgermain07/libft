/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:09:19 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/05 23:09:54 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		ft_is_overlap(void *dst, void *src, size_t len)
{
	unsigned char 	*x;
	unsigned char 	*y;
	size_t			i;

	i = 0;
	x = dst;
	y = src;
	while (i < len)
	{
		if (x + i == y || y + i == x)
			return (1);
		i++;
	}
	return (0);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		buffer;
	size_t				i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < len)
	{
		buffer = ((unsigned char *)src)[i];
		((unsigned char *)dst)[i] = buffer;
		i++;
	}
	return (dst);
}

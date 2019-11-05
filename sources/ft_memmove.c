/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:09:19 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/05 10:45:51 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		buffer;
	size_t				i;

	i = 0;
	while (i < len)
	{
		buffer = ((unsigned char *)src)[i];
		((unsigned char *)dst)[i] = buffer;
		i++;
	}
	return (dst);
}

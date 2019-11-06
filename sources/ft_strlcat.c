/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:29:24 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/06 09:55:37 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	locate;

	i = 0;
	j = 0;
	locate = 0;
	while (dst[j])
		j++;
	while (src[i])
	{
		if (i + j < dstsize)
		{
			dst[j + i] = src[i];
			locate = j + i + 1;
		}
		i++;
	}
	if (i + j >= dstsize)
		locate = dstsize;
	if (dstsize != 0)
		dst[locate] = '\0';
	return (i + j);
}

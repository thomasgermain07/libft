/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:29:25 by thomasgerma       #+#    #+#             */
/*   Updated: 2019/11/05 10:45:41 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

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
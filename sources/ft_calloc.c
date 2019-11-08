/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:09:46 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/08 11:06:26 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *temp;

	if (!(temp = malloc(count * size)))
		return (NULL);
	if (!count || !size)
		return (temp);
	ft_memset(temp, 0, size * count);
	return (temp);
}

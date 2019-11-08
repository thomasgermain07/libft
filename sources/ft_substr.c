/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:35:32 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/07 17:09:53 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s = s + start;
	ft_strlcpy(sub, s, len + 1);
	sub[len] = '\0';
	return (sub);
}

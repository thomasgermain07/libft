/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:19:26 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/06 13:09:33 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		check(const char *s, int c)
{
	int i;

	i = 1;
	while(s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strrchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c && !check(s, c))
			return ((char *)s);
		s++;
	}
	if (!c && !*s)
		return ((char *)s);
	return (NULL);
}

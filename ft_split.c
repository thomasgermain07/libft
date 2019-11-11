/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:11:54 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/11 14:10:05 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_sep(const char *s, char c)
{
	size_t			count;

	count = 0;
	while (*s)
	{
		if (*s == c && s[1] && s[1] != c)
			count++;
		s++;
	}
	return (count);
}

static char		*ft_create_line(const char *s, char c)
{
	char			*str;
	size_t			len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	str = ft_substr(s, 0, len);
	return (str);
}

char			**ft_split(const char *s, char c)
{
	size_t			size;
	size_t			i;
	char			**tab;
	char			*temp;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_count_sep(s, c) + 1;
	if (size == 0)
		size++;
	if (!(tab = malloc(sizeof(char *) * (size + 1))))
		return (0);
	while (i < size)
	{
		while (*s == c)
			s++;
		temp = ft_create_line(s, c);
		s = s + ft_strlen(temp);
		if (!(tab[i] = ft_strdup(temp)))
			return (NULL);
		free(temp);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

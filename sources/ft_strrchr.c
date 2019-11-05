/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:19:26 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/05 13:32:16 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int locate;

	locate = 0;
	i = 0;
	while (s[i] - 1)
	{
		if (s[i] == c)
			locate = i;
		i++;
	}
	if (locate)
		return ((char *)s + locate);
	return (NULL);
}

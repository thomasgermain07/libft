/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:40:38 by thgermai          #+#    #+#             */
/*   Updated: 2019/11/08 14:10:05 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_len_int(int n)
{
	int len;

	len = 1;
	while (n / 10)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static	void	ft_strrev(char *s)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

char			*ft_itoa(int n)
{
	char			*result;
	int				len;
	int				i;
	int				neg;
	unsigned int	nb;

	i = 0;
	neg = 0;
	len = ft_len_int(n) + 1;
	if (n < 0)
		len++;
	if (!(result = malloc(sizeof(char) * (len))))
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		nb = -n;
	}
	else
		nb = n;
	while (i < len - 1)
	{
		result[i] = (nb % 10) + 48;
		i++;
		nb = nb / 10;
	}
	if (neg)
		result[len - 2] = '-';
	ft_strrev(result);
	result[len] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 23:18:41 by thomasgerma       #+#    #+#             */
/*   Updated: 2019/11/05 09:40:41 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isupper(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (1);
	return (0);
}

static int		ft_islower(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (1);
	return (0);
}

int				ft_isalpha(int c)
{
	if (ft_isupper((unsigned char)c) || ft_islower((unsigned char)c))
		return (1);
	return (0);
}

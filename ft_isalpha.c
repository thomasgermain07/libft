/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 23:18:41 by thomasgerma       #+#    #+#             */
/*   Updated: 2019/11/04 23:48:17 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isupper(int c)
{
	if ((unsigned char)c >= 101 && (unsigned char)c <= 132)
		return (1);
	return (0);
}

static int		ft_islower(int c)
{
	if ((unsigned char)c >= 141 && (unsigned char)c <= 172)
		return (1);
	return (0);
}

int				ft_isalpha(int c)
{
	if (ft_isupper((unsigned char)c) || ft_islower((unsigned char)c))
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 10:19:24 by thgermai          #+#    #+#             */
/*   Updated: 2020/01/08 11:12:26 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_exit(int ret, int n, ...)
{
	va_list		argv;
	void		*temp;
	int			i;

	i = 0;
	va_start(argv, n);
	while (i < n)
	{
		if (!(temp = va_arg(argv, void *)))
			return (ret);
		ft_memdel(&temp);
		i++;
	}
	va_end(argv);
	return (ret);
}

void		*ft_exit_str(void *ret, int n, ...)
{
	va_list		argv;
	void		*temp;
	int			i;

	i = 0;
	va_start(argv, n);
	while (i < n)
	{
		if (!(temp = va_arg(argv, void *)))
			return (ret);
		ft_memdel(&temp);
		i++;
	}
	va_end(argv);
	return (ret);
}

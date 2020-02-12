/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 19:34:40 by thomasgerma       #+#    #+#             */
/*   Updated: 2020/02/12 19:05:11 by thomasgerma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			define_type(char c)
{
	int		i;
	char	*value;

	i = 0;
	if (c == 'e')
		return (-999);
	value = ft_strdup(VALID_VALUE);
	while (value[i] && value[i] != c)
		i++;
	if (value[i])
		return (ft_exit(i, 1, value));
	return (ft_exit(-1, 1, value));
}

int			next_arg_index(const char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (*str == '%')
			return (i);
		str++;
		i++;
	}
	return (i);
}

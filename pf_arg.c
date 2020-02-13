/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:23:16 by thgermai          #+#    #+#             */
/*   Updated: 2020/02/13 10:27:45 by thgermai         ###   ########.fr       */
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

int				check_fd(const char *str)
{
	if (str[0] && str[1] && str[0] == '%' && str[1] == 'e')
		return (2);
	return (1);
}

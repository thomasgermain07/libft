/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:23:26 by thgermai          #+#    #+#             */
/*   Updated: 2020/02/13 10:27:53 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../libft.h"

const char		*ft_refresh_str(const char *str)
{
	int				next_arg;

	next_arg = next_arg_index(str);
	if (str[next_arg] == '%')
	{
		next_arg++;
		while (str[next_arg] && define_type(str[next_arg]) == -1)
			next_arg++;
		next_arg++;
	}
	return (str + next_arg);
}

int				redict_type(va_list args, t_param *param, int fd)
{
	int		(*fptr[9])(va_list, t_param *, int fd);

	if (!param)
		return (ft_exit(-1, 0));
	if (param->specifier == -1)
		return (ft_exit(-1, 1, param));
	if (param->specifier == -999)
		return (ft_exit(0, 1, param));
	fptr[0] = &pf_fill_char;
	fptr[1] = &pf_fill_str;
	fptr[2] = &pf_fill_add;
	fptr[3] = &pf_fill_deci;
	fptr[4] = &pf_fill_int;
	fptr[5] = &pf_fill_unsi;
	fptr[6] = &pf_fill_hexa;
	fptr[7] = &pf_fill_hexa_caps;
	fptr[8] = &pf_fill_modulo;
	return ((*fptr[param->specifier])(args, param, fd));
}

int				print_str(const char *str, int i, int fd)
{
	char		*output;

	if (!(output = ft_substr(str, 0, next_arg_index(str))))
		return (ft_exit(-1, 0));
	ft_putstr_fd(output, fd);
	return (ft_exit(i + ft_strlen(output), 1, output));
}

int			getting_arg(const char *str, va_list args, int fd, int *i)
{
	int ret;

	ret = 0;
	if (str[next_arg_index(str)] == '%')
	{
		ret = redict_type(args, parsing_param(str + next_arg_index(str),
			args), fd);
		if (ret != -1)
			*i += ret;
		else
			*i = -1;
	}
	return (*i);
}

int				ft_printf(const char *str, ...)
{
	va_list		args;
	int			i;
	int			fd;

	i = 0;
	fd = check_fd(str);
	va_start(args, str);
	while (*str)
	{
		if ((i = print_str(str, i, fd)) == -1)
			break ;
		if (getting_arg(str, args, fd, &i) == -1)
			break ;
		str = ft_refresh_str(str);
	}
	va_end(args);
	return (ft_exit(i, 0));
}

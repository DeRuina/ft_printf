/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:42:11 by druina            #+#    #+#             */
/*   Updated: 2022/11/25 15:04:46 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	get_type(char c, va_list args, int count)
{
	if (c == '%')
		count = print_c('%', count);
	if (c == 'c')
		count = print_c(va_arg(args, char), count);
	if (c == 's')
		count = print_s(va_arg(args, char *), count);
	if (c == 'i' || c == 'd')
		count = print_nbr(va_arg(args, int), count);
		return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		while (*str != '%')
		{
			ft_putchar(*str);
			count++;
			str++;
		}
		str++;
		count = get_type(*str, args, count);
	}
	return (count);
}

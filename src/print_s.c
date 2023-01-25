/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:20:31 by druina            #+#    #+#             */
/*   Updated: 2022/12/01 09:25:04 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *str, int count)
{
	if (str == NULL)
	{
		count = count + ft_putstr("(null)");
		return (count);
	}
	count = count + ft_putstr(str);
	return (count);
}

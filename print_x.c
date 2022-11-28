/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:37:43 by druina            #+#    #+#             */
/*   Updated: 2022/11/28 15:35:15 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_x(unsigned int nb, char x, int count)
{
	char	*str;

	str = ft_nbrtohex(nb, x);
	count = count + ft_putstr(str);
	return (count);
}

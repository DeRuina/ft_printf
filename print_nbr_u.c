/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:41:22 by druina            #+#    #+#             */
/*   Updated: 2022/11/28 08:52:37 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_nbr_u(unsigned int nb, int count)
{
	if (nb > 0)
		nb = 0;
	count = count + ft_putnbr_unsigned(nb);
	return(count);
}



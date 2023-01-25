/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:02:36 by druina            #+#    #+#             */
/*   Updated: 2023/01/25 11:37:28 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_nbrlen(long nb)
{
	int	count;

	count = 0;
	if (nb < 0 || nb == 0)
	{
		nb = nb * -1;
		count++;
	}
	while (nb > 0)
	{
		nb = (nb - nb % 10) / 10;
		count++;
	}
	return (count);
}
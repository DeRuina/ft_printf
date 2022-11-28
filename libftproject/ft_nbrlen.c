/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:02:36 by druina            #+#    #+#             */
/*   Updated: 2022/11/28 08:10:38 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:41:49 by druina            #+#    #+#             */
/*   Updated: 2022/11/28 08:14:20 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	print_c(char c, int count);
int	print_s(char *str, int count);
int	print_nbr(int nb, int count);

#endif

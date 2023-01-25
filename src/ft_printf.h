/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:40:11 by druina            #+#    #+#             */
/*   Updated: 2023/01/25 23:38:23 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/src/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	print_c(char c, int count);
int	print_s(char *str, int count);
int	print_nbr(int nb, int count);
int	print_nbr_u(unsigned int nb, int count);
int	print_x(unsigned int nb, char x, int count);
int	print_p(void *ptr, int count);

#endif

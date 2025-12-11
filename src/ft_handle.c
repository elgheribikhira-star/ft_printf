/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-gher <kel-gher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 11:50:37 by kel-gher          #+#    #+#             */
/*   Updated: 2025/12/08 16:19:44 by kel-gher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle(char c, va_list *arg)
{
	if (c == 'd' || c == 'i')
		return (ft_printf_di(va_arg(*arg, int)));
	else if (c == 'X')
		return (ft_printf_ux(va_arg(*arg, unsigned int)));
	else if (c == 'x')
		return (ft_printf_x(va_arg(*arg, unsigned int)));
	else if (c == 'c')
		return (ft_printf_c(va_arg(*arg, int)));
	else if (c == 's')
		return (ft_printf_s(va_arg(*arg, char *)));
	else if (c == 'p')
		return (ft_printf_ptr(va_arg(*arg, void *)));
	else if (c == 'u')
		return (ft_printf_u(va_arg(*arg, unsigned int)));
	else if (c == '%')
		return (ft_printf_c('%'));
	return (0);
}

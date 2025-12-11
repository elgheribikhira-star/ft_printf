/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-gher <kel-gher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 11:50:15 by kel-gher          #+#    #+#             */
/*   Updated: 2025/12/11 10:28:19 by kel-gher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_di(long n)
{
	int	len;
	int	result;

	len = 0;
	if (n < 0)
	{
		result = ft_printf_c('-');
		if (result == -1)
			return (-1);
		len += result;
		n *= -1;
	}
	if (n >= 10)
	{
		len += ft_printf_di(n / 10);
		if (len == -1)
			return (-1);
	}
	result = ft_printf_c(n % 10 + '0');
	if (result == -1)
		return (-1);
	len += result;
	return (len);
}

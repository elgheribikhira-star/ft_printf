/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-gher <kel-gher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 11:50:23 by kel-gher          #+#    #+#             */
/*   Updated: 2025/12/11 11:45:49 by kel-gher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned long n)
{
	ssize_t	count;
	int		result;

	count = 0;
	if (n >= 10)
	{
		count += ft_printf_u(n / 10);
		if (count == -1)
			return (-1);
	}
	result = ft_printf_c(n % 10 + '0');
	if (result == -1)
		return (-1);
	count++;
	return (count);
}

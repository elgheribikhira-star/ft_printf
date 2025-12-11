/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-gher <kel-gher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 11:50:18 by kel-gher          #+#    #+#             */
/*   Updated: 2025/12/11 10:28:15 by kel-gher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(int c)
{
	int	res;

	res = write(1, &c, 1);
	if (res == -1)
		return (-1);
	return (1);
}

int	ft_printf_s(char *s)
{
	int	res;
	int	count;

	count = 0;
	if (s == NULL)
	{
		res = write(1, "(null)", 6);
		if (res == -1)
			return (-1);
		return (6);
	}
	while (s[count])
	{
		res = ft_printf_c(s[count]);
		if (res == -1)
			return (-1);
		count++;
	}
	return (count);
}

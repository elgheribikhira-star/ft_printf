/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptrhexX.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-gher <kel-gher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 11:50:12 by kel-gher          #+#    #+#             */
/*   Updated: 2025/12/11 11:41:57 by kel-gher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_phex(unsigned long n)
{
	char	*a;
	int		count;
	int		res;
	char	c;

	a = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_phex(n / 16);
	}
	c = a[n % 16];
	res = write(1, &c, 1);
	if (res == -1)
		return (-1);
	count += res;
	return (count);
}

int	ft_printf_ptr(void *p)
{
	int				count;
	int				res;

	count = 0;
	if (p == NULL)
	{
		res = write(1, "0x0", 3);
		if (res == -1)
			return (-1);
		count += res;
	}
	else
	{
		res = write(1, "0x", 2);
		if (res == -1)
			return (-1);
		count += res;
		res = ft_phex((unsigned long)p);
		if (res == -1)
			return (-1);
		count += res;
	}
	return (count);
}

int	ft_printf_x(unsigned int n)
{
	char	*base;
	int		count;
	int		res;
	char	c;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_printf_x(n / 16);
		if (count == -1)
			return (-1);
	}
	c = base[n % 16];
	res = write(1, &c, 1);
	if (res == -1)
		return (-1);
	count += res;
	return (count);
}

int	ft_printf_ux(unsigned int n)
{
	char	*base;
	int		count;
	char	c;
	int		res;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
	{
		count += ft_printf_ux(n / 16);
		if (count == -1)
			return (-1);
	}
	c = base[n % 16];
	res = write(1, &c, 1);
	if (res == -1)
		return (-1);
	count += res;
	return (count);
}

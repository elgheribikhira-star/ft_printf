/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-gher <kel-gher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:41:08 by kel-gher          #+#    #+#             */
/*   Updated: 2025/12/11 14:42:42 by kel-gher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	erreur(va_list *arg)
{
	va_end(*arg);
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		sum;
	int		ret;
	va_list	arg;

	i = -1;
	sum = 0;
	va_start(arg, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			i++;
			ret = ft_handle(str[i], &arg);
		}
		else
			ret = ft_printf_c(str[i]);
		if (ret == -1)
			return (erreur(&arg));
		sum += ret;
	}
	va_end(arg);
	return (sum);
}

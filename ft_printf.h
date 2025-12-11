/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-gher <kel-gher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:50:29 by kel-gher          #+#    #+#             */
/*   Updated: 2025/12/10 15:02:28 by kel-gher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_handle(char c, va_list *arg);
int	ft_printf_c(int c);
int	ft_printf_s(char *s);
int	ft_printf_di(long n);
int	ft_printf_ptr(void *p);
int	ft_printf_x(unsigned int n);
int	ft_printf_ux(unsigned int n);
int	ft_printf_u(unsigned long n);

#endif
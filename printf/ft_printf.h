/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:54:05 by caiperei          #+#    #+#             */
/*   Updated: 2023/11/07 11:35:38 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

int	ft_format(const char *arg, int i, va_list ap);
int	ft_putchar(char c);
int	ft_putnumber(unsigned int nb);
int	ft_puthex(unsigned long d, int arg);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);

#endif

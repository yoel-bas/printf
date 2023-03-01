/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 05:32:56 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/11/13 00:34:34 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print(const char s, va_list args)
{
	int	len;

	len = 0;
	if (s == 'd' || s == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (s == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (s == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (s == 'x')
		len += ft_puthexlower(va_arg(args, int));
	else if (s == 'X')
		len += ft_puthexupper(va_arg(args, int));
	else if (s == 'u')
		len += ft_putu(va_arg(args, unsigned int));
	else if (s == '%')
		len += ft_putchar('%');
	else if (s == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_puthex(va_arg(args, unsigned long long));
	}
	else
		len += ft_putchar(s);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '\0')
				break ;
			len += ft_print(s[i + 1], args);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}

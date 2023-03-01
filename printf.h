/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:59:26 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/11/13 00:13:25 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H 

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_check(const char *str);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);
int	ft_puthexlower(unsigned int nb);
int	ft_puthexupper(unsigned int nb);
int	ft_puthex(unsigned long long nb);
int	ft_putu(unsigned int nb);
int	ft_printf(const char *s, ...);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 05:18:33 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/11/12 23:20:21 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	lenhex(unsigned long long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_puthex(unsigned long long nb)
{
	char	*s;
	int		lenh;

	lenh = lenhex(nb);
	s = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_puthex(nb / 16);
		ft_puthex(nb % 16);
	}
	if (nb < 16)
		ft_putchar(s[nb]);
	return (lenh);
}

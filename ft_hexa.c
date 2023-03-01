/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:39:39 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/11/12 22:42:40 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	len_hex(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_puthexupper(unsigned int nb)
{
	char	*s;
	int		lenh;

	lenh = len_hex(nb);
	s = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar(s[nb]);
	if (nb >= 16)
	{
		ft_puthexupper(nb / 16);
		ft_puthexupper(nb % 16);
	}
	return (lenh);
}

int	ft_puthexlower(unsigned int nb)
{
	char	*s;
	int		lenh;

	lenh = len_hex(nb);
	s = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(s[nb]);
	if (nb >= 16)
	{
		ft_puthexlower(nb / 16);
		ft_puthexlower(nb % 16);
	}
	return (lenh);
}

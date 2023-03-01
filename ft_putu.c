/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 06:04:48 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/11/12 23:51:22 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	len_nb(unsigned int nb)
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
		nb = nb / 10;
		len++;
	}
	return (len);
}

int	ft_putu(unsigned int nb)
{
	int	lenu;

	lenu = len_nb(nb);
	if (nb > 9)
	{
		ft_putu(nb / 10);
		ft_putu(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (lenu);
}

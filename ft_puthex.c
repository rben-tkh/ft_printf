/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-tkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:59:21 by rben-tkh          #+#    #+#             */
/*   Updated: 2022/05/20 02:13:10 by rben-tkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char *base, int *i)
{
	if (n > 15)
		ft_puthex((n / 16), base, i);
	ft_putchar(base[(n % 16)], i);
}
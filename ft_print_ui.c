/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ui.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:31:42 by hamchur           #+#    #+#             */
/*   Updated: 2021/11/19 19:09:40 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_u(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr_u(nb / 10);
	ft_print_c(nb % 10 + 48);
}

int	ft_print_ui(unsigned int nb)
{
	int				char_output;
	unsigned int	save;

	save = nb;
	char_output = 0;
	while (save > 9)
	{
		save = save / 10;
		char_output++;
	}
	ft_putnbr_u(nb);
	return (char_output + 1);
}

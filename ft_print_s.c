/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:18:08 by hamchur           #+#    #+#             */
/*   Updated: 2021/11/15 14:21:57 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char	*str)
{
	int	char_output;

	if (!str)
		str = "(null)";
	char_output = 0;
	while (str[char_output])
	{
		ft_putchar_fd(str[char_output], 1);
		char_output++;
	}
	return (char_output);
}

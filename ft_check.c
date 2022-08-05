/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:08:54 by hamchur           #+#    #+#             */
/*   Updated: 2021/11/19 20:25:03 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list args)
{
	int	char_output;

	char_output = 0;
	if (c == 'c')
		char_output = ft_print_c(va_arg(args, int));
	if (c == '%')
		char_output = ft_print_percent();
	if (c == 's')
		char_output = ft_print_s(va_arg(args, char *));
	if (c == 'i' || c == 'd')
		char_output = ft_print_i(va_arg(args, int));
	if (c == 'u')
		char_output = ft_print_ui(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		char_output = ft_print_hexa(va_arg(args, unsigned int), c);
	if (c == 'p')
		char_output = ft_print_p(va_arg(args, void *));
	return (char_output);
}

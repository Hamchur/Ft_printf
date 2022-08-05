/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:31:11 by hamchur           #+#    #+#             */
/*   Updated: 2021/11/15 13:35:36 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parser(const char *str, va_list args)
{
	int	char_output;
	int	i;

	char_output = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			char_output += ft_check(str[i + 1], args);
			i += 2;
		}
		else
		{
			char_output += ft_print_c(str[i]);
			i++;
		}
	}
	return (char_output);
}

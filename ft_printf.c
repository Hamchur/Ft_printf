/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pirntf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:30:24 by hamchur           #+#    #+#             */
/*   Updated: 2021/11/15 13:30:40 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		char_output;
	char	*str_input;

	str_input = (char *)input;
	char_output = 0;
	va_start(args, input);
	char_output = ft_parser(str_input, args);
	va_end(args);
	return (char_output);
}

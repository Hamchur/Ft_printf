/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:25:18 by hamchur           #+#    #+#             */
/*   Updated: 2021/11/22 16:11:50 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *ptr)
{
	int			char_output;
	uintptr_t	int_input;

	int_input = (uintptr_t)(void *)ptr;
	char_output = ft_print_c('0');
	char_output += ft_print_c('x');
	char_output += ft_print_hexa(int_input, 'x');
	return (char_output);
}

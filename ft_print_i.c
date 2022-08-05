/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:35:18 by hamchur           #+#    #+#             */
/*   Updated: 2021/11/15 14:40:33 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*result;

	len = get_len(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (len-- > i)
	{
		if (n < 0)
			result[len] = '0' + n % 10 * (-1);
		else
			result[len] = '0' + n % 10;
		n = n / 10;
	}
	return (result);
}

int	ft_print_i(int i)
{
	int		char_output;
	char	*i_input;

	i_input = ft_itoa(i);
	char_output = ft_print_s(i_input);
	free(i_input);
	return (char_output);
}

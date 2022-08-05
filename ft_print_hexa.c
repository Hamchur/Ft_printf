/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:56:41 by hamchur           #+#    #+#             */
/*   Updated: 2021/11/19 20:56:48 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_len(unsigned long long int nb, int len)
{
	while (nb / 16 != 0)
	{
		len++;
		return (ft_len(nb / 16, len));
	}
	len++;
	return (len);
}

static void	convert_hexa(unsigned long long int nb, char *hexa, int len)
{
	int						base;
	unsigned long long int	tmp;

	base = 16;
	while (nb != 0)
	{
		tmp = nb / base;
		if ((nb % base) < 10)
			hexa[len - 1] = (nb % base) + 48;
		else
			hexa[len - 1] = (nb % base) + 55;
		nb = tmp;
		len--;
	}
}

int	ft_print_hexa(unsigned long long int nb, char up)
{
	int		char_output;
	int		len;
	char	*hexa;

	char_output = 0;
	len = 0;
	len = ft_len(nb, len);
	if (nb == 0)
		hexa = ft_strdup("0");
	else
		hexa = malloc(sizeof(char) * len + 1);
	if (hexa == NULL)
		return (0);
	hexa[len] = '\0';
	convert_hexa(nb, hexa, len);
	if (up == 'x')
		hexa = ft_str_tolower(hexa);
	char_output += ft_print_s(hexa);
	free(hexa);
	return (char_output);
}

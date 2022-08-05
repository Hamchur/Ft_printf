/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pirntf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:31:13 by hamchur           #+#    #+#             */
/*   Updated: 2021/11/26 12:51:20 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *input, ...);
int		ft_check(char c, va_list args);
int		ft_parser(const char *str, va_list args);
int		ft_print_percent(void);
int		ft_print_c(char c);
int		ft_print_s(char *str);
int		ft_print_i(int i);
int		ft_print_ui(unsigned int nb);
int		ft_print_hexa(unsigned long long int nb, char up);
int		ft_print_p(void *ptr);
char	*ft_str_tolower(char *str);
void	ft_putchar_fd(char c, int fd);

#endif

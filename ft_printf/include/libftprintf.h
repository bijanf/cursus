/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:29:27 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/11 09:54:10 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_printnbr(int n);
int		ft_print_fp(unsigned long long ptr);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_print_hex(const char format, unsigned int args);
int		print_string(char *s);

#endif

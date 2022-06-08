/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:56:12 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/06/08 20:16:24 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *str, ...);
int			ft_printf_selection(va_list list, char c);
int			ft_printf_c(char c);
int			ft_printf_d(int nbr);
int			ft_printf_p(unsigned long n, int is_starting);
int			ft_printf_s(char *s);
int			ft_printf_u(unsigned int n);
int			ft_strlen1(const char *s);
int			ft_putnbr(int n);
int			ft_printf_x(unsigned int n);
int			ft_printf_xx(unsigned int n);

char		*ft_strchr1(char *str, char c);

#endif

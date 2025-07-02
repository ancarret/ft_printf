/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarret <ancarret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:22:56 by ancarret          #+#    #+#             */
/*   Updated: 2025/01/28 11:48:09 by ancarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_strlen(const char *str);
void	reverse(char *result);
int		correct_base(char *base);
int		ft_putnbr_base(unsigned long nbr, char *base);
int		ft_putunsigned(unsigned int n);
int		ft_pointer(void *ptr);
int		check_format(char format, va_list args);

#endif

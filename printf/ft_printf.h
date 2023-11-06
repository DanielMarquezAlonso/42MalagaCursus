/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:04:34 by danmarqu          #+#    #+#             */
/*   Updated: 2023/11/06 16:35:05 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(char const *s, ...);
void	ft_printchar(char c, int *cont);
void	ft_printstr(char *s, int *cont);
int		ft_printnbr(int n, int *cont);
int		ft_print_unsigned_nbr(unsigned int n, int *cont);
void	ft_print_ptr(uintptr_t ptr, int *cont);
void	ft_print_hex(unsigned int nbr, char conversion, int *cont);

#endif

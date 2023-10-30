/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:04:34 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/30 21:54:13 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_printf(char const *s, ...);
void ft_printstr(char *s, int *cont);
void ft_printnbr(int n, int *cont);
void ft_print_unsigned_nbr(unsigned int n, int *cont);


#endif

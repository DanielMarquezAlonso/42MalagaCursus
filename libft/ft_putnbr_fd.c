/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:21:25 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/18 13:35:12 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar(n + '0', fd);
}

	// char	c;
	// int 	i;

	// if (n == (-2147483648))
	// {
	// 	write(fd, "-", 1);
	// }
	// if (n < 0)
	// {
	// 	write(fd, "-", 1);
	// }
	// while (n)
	// {
	// 	i = (n % 10) + '0';
	// 	numlen--;
	// 	n = n / 10;
	// }
	// c = n + '0';
	// write(fd, &c, 1);

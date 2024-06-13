/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:42:09 by danmarqu          #+#    #+#             */
/*   Updated: 2024/06/03 13:11:32 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// Función para imprimir mensajes de error

int	ft_isnumber(const char *str)
{
	int	has_digits;

	has_digits = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			str++;
		}
		else if (*str == '-' || *str == '+')
		{
			if (has_digits)
				return (0);
			str++;
		}
		else if (!isdigit(*str))
			return (0);
		else
		{
			has_digits = 1;
			str++;
		}
	}
	return (has_digits);
}
// Función para comprobar si una cadena representa un número entero
// int	ft_isnumber(const char *str)
// {
// 	while (*str == '-' || *str == '+' || *str == ' ')
// 		str++;
// 	//if (*str == '\0')
// 	//	return (0);
// 	while (*str)
// 	{
// 		if (!isdigit(*str))
// 			return (0);
// 		str++;
// 	}
// 	return (1);
// }

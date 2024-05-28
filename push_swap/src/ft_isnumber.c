/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:42:09 by danmarqu          #+#    #+#             */
/*   Updated: 2024/05/27 15:15:26 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// Función para imprimir mensajes de error

// Función para comprobar si una cadena representa un número entero
int	ft_isnumber(const char *str)
{
	if (*str == '-' || *str == '+' || *str == ' ')
		str++;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

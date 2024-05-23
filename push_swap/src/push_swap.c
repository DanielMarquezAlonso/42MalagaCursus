/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:05:04 by danmarqu          #+#    #+#             */
/*   Updated: 2024/05/23 15:51:19 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parsing(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	**str;

	i = 0;
	new_list(stack_b, NULL);
	if (argc == 2)
	{
		*str = ft_split(argv[1], ' ');
		while (str && str[i])
			new_stack(stack_a, ft_atoi(str[i++]));
	}
	if (argc > 2)
	{
		while (argv[i])
			new_stack(stack_a, ft_atoi(argv[i++]));
	}
}

void	ft_error(char *error)
{
	ft_printf("Error: %s\n", error);
	exit(0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc <= 0)
		ft_error("Error en los argumentos");
	if (argc == 2 && ft_isdigit(argv[1]) == 0)
		ft_error("Error en los argumentos");
	if (argc > 2)
	{
		while (argv[i])
			if (ft_isdigit(argv[i++]) == 0)
				ft_error("Error en los argumentos");
	}
	parsing(argc, argv);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:05:04 by danmarqu          #+#    #+#             */
/*   Updated: 2024/06/03 12:50:14 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(char *error)
{
	ft_printf("Error: %s\n", error);
	exit(1);
}

void	new_stack(t_list **stack, int content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		ft_error("Error al asignar memoria");
	if (new_node != NULL)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	if (*stack == NULL)
		*stack = new_node;
	else
	{
		new_node->next = *stack;
		*stack = new_node;
	}
}

void	parsing(int argc, char **argv)
{
	t_list		*stack_a;
	//t_list	*stack_b;
	int				i;
	int				num;
	char		**str;

	stack_a = NULL;
	//stack_b = NULL;
	i = 0;
	//new_stack(stack_b, NULL);
	if (argc == 2)
	{
		i = 0;
		str = ft_split(argv[1], ' ');
		while (str && str[i])
		{
			num = ft_atoi(str[i]);
			new_stack(&stack_a, num);
			ft_printf("Numero: %d\n", num);
			i++;
		}
	}
	else if (argc > 2)
	{
		i = 1;
		while (argv[i])
		{
			num = ft_atoi(argv[i]);
			new_stack(&stack_a, num);
			ft_printf("Numero: %d\n", num);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 0)
		ft_error("Error\n");
	if (argc == 2 && ft_isnumber(argv[1]) == 0)
		ft_error("Error no numeber uno");
	if (argc > 2)
	{
		while (argv[i])
			if (ft_isnumber(argv[i++]) == 0)
				ft_error("Error no number varios");
	}
	parsing(argc, argv);
	return (0);
}

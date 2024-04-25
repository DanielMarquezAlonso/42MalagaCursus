/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:42:43 by danmarqu          #+#    #+#             */
/*   Updated: 2024/04/25 15:12:42 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_routine(char **av, int *p_fd, char **env)
{
	int		fd;

	fd = open_file(av[1], 0);
	dup2(fd, 0);
	dup2(p_fd[1], 1);
	close(p_fd[0]);
	execute(av[2], env);
}

void	parent_routine(char **av, int *p_fd, char **env)
{
	int		fd;

	fd = open_file(av[4], 1);
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(p_fd[1]);
	execute(av[3], env);
}

int	main(int argc, char *argv[], char **envp)
{
	int		fd[2];
	pid_t	pid;

	if (argc == 5)
	{
		if (pipe(fd) == -1)
			error();
		pid = fork();
		if (pid == -1)
			error();
		if (pid == 0)
			child_routine(argv, fd, envp);
		waitpid(pid, NULL, 0);
		parent_routine(argv, fd, envp);
	}
	else
	{
		ft_putstr_fd("\033[1;31mError: Bad arguments\n\e[0m", 2);
		ft_putstr_fd("Ex: ./pipex infile cmd cmd outfile\n", 2);
	}
	return (0);
}

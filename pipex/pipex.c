/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:42:43 by danmarqu          #+#    #+#             */
/*   Updated: 2024/01/15 15:50:40 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_routine(pid_t pid)
{
	printf("Child: I'm the child, my internal pid is %d.\n", pid);
}

void	parent_routine(pid_t pid)
{
	printf("Parent: I'm the parent, my child's pid is %d.\n", pid);
}

int	main(int argc, char *argv[], char *envp[])
{
	int	fd[2];
	int	pid;

	//if (argc == 5)
	//
		if (pipe(fd) == -1)
			return (1);
		pid = fork();
		if (pid == -1)
			return (1);
		if (pid == 0)
			child_routine(pid);
		wait(NULL);
		parent_routine(pid);
		close(fd[0]);
		close(fd[1]);
	//
	return (0);
}


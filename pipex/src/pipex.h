/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:43:41 by danmarqu          #+#    #+#             */
/*   Updated: 2024/04/25 15:05:20 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>  
# include <sys/types.h>
# include <sys/wait.h>

void	exit_handler(int exit);
void	execute(char *argv, char **envp);
char	*find_path(char *cmd, char **envp);
void	error(void);
int		open_file(char *file, int in_or_out);

#endif
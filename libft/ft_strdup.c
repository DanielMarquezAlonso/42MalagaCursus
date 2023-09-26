/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:53:53 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/23 17:14:40 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//   The strdup() function allocates sufficient memory for a copy of the 
// 	 string s1, does the copy, and returns a pointer to it.  The pointer
// 	 may subsequently be used as an argument to the function free(3).

//   If insufficient memory is available, NULL is returned and errno is set
// 	 to ENOMEM.

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*mems1;

	i = 0;
	len = ft_strlen(s1);
	mems1 = malloc(len + 1);
	if (mems1 == NULL)
		return (NULL);
	while (i < len)
	{
		mems1[i] = s1[i];
		i++;
	}
	mems1[i] = '\0';
	return (mems1);
}

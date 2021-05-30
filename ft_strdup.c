/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 16:00:22 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/13 16:02:25 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.  The pointer may
** subsequently be used as an argument to the function free(3). If insufficient
** memory is available, NULL is returned and errno is set to ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*point;
	size_t	i;

	i = ft_strlen(s1);
	point = (char *)malloc(i + 1);
	if (!(point))
		return (0);
	ft_strlcpy(point, s1, i + 1);
	return (point);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:04:22 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/15 14:34:46 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**	Allocates (with malloc(3)) and returns a substring from the string ’s’.
** The substring begins at index ’start’ and is of maximum size ’len’.
**
** RETURN VALUES:
** The substring.  NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*point;
	unsigned int	i;
	size_t			l;

	point = 0;
	i = 0;
	l = 0;
	if (len > ft_strlen(s))
		l = ft_strlen(s);
	else
		l = len;
	point = (char *)ft_calloc(sizeof(char), l + 1);
	if (!point)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		return (point);
	while (i < l)
	{
		point[i] = s[start];
		i++;
		start++;
	}
	return (point);
}

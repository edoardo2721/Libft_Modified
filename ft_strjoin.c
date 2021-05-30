/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:45:12 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/18 17:59:10 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**	Allocates (with malloc(3)) and returns a new string, which is the result of
** the concatenation of ’s1’ and ’s2’.
** RETURN VALUES:
**	The new string.  NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*point;
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (!s2)
		return ((char *)s1);
	if (!s1)
		return ((char *)s2);
	point = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)));
	if (!(point))
		return (0);
	while (s1[c])
		point[i++] = s1[c++];
	c = 0;
	while (s2[c])
		point[i++] = s2[c++];
	point[i] = 0;
	return (point);
}

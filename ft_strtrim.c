/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:50:13 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/15 11:51:00 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
** specified in ’set’ removed from the beginning and the end of the string.
**
** RETURN VALUES:
** The trimmed string.  NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i >= 0 && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

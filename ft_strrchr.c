/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:54:11 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 16:54:14 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The strchr() function locates the first occurrence of c (converted to a
** char) in the string pointed to by s.  The terminating null character is
** considered to be part of the string;
** therefore if c is `\0', the functions locate the terminating `\0'.
** The strrchr() function is identical to strchr(), except it locates the last
** occurrence of c.
** RETURN VALUES:
**	The functions strchr() and strrchr() return a pointer to the located
** character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*point;

	point = 0;
	if (c > 126 || c < 0)
		return ((char *)str);
	while (*str)
	{
		if (c == *str)
		{
			point = (char *)str;
		}
		str++;
	}
	if (c == '\0')
		point = (char *)str;
	if (point)
		return (point);
	return (NULL);
}

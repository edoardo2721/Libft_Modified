/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:53:02 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/17 14:13:02 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
** 	The strnstr() function locates the first occurrence of the null-termi-nated
** string needle in the string haystack, where not more than len characters are
** searched.  Characters that appear after a `\0' character are not searched.
**
** RETURN VALUES:
**  If needle is an empty string, haystack is returned; if needle occurs nowhere
** in haystack, NULL is returned; oth-erwise a pointer to the first character of
** the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((len == 0 && *needle == 0) || *needle == 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i])
	{
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (!(needle[j + 1]))
				return ((char *)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

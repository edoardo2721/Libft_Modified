/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:15:20 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 16:27:46 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
**
** RETURN VALUES:
**	The memcmp() function returns zero if the two strings are identical,
** otherwise returns the difference between the first two differing bytes
** (treated as unsigned char values, so that `\200' is greater than `\0',
** for example). Zero-length strings are always identical. This behavior is
** not required by C and portable code should only depend on the sign of the
** returned value.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

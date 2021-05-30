/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:12:07 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 16:12:09 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library (libc, -lc)
**
** DESCRIPTION:
**	the memccpy() function copies bytes from string src to string dst.	If the
** character c (as converted to an unsigned char) occurs in the string src, the
** copy stops and a pointer to the byte after the copy of c in the string dst
** is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if ((unsigned char)c == ((unsigned char *)src)[i])
			return (dst + i + 1);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:47:31 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/12 16:44:52 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	strlcpy() take the full size of the destination buffer and guarantee
** NUL-termination if there is room.  Note that room for the NUL should be
** included in dstsize. strlcpy() copies up to dstsize - 1 characters from
** the string src to dst, NUL-terminating the result if dstsize is not 0.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!(dst) || !(src))
		return (0);
	if (dstsize < 1)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

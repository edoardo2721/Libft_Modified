/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:46:06 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 16:46:42 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	strlcat() appends string src to the end of dst.  It will append at most
** dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
** dstsize is 0 or the original dst string was longer than dstsize (in practice
** this should not happen as it means that either dstsize is incorrect or that
** dst is not a proper string).
**
** RETURN VALUES:
**	strlcat() functions return the total length of the string they tried to
** create.That means the initial length of dst plus the length of src.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	h;
	size_t	l;

	i = ft_strlen(dst);
	h = 0;
	l = ft_strlen(dst);
	if (dstsize < 1)
		return (ft_strlen(src));
	if (i > dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[h] && i < dstsize - 1)
	{
		dst[i] = src[h];
		i++;
		h++;
	}
	dst[i] = '\0';
	return (l + ft_strlen(src));
}

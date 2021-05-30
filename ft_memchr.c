/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:14:32 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 16:14:36 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s.
**
** RETURN VALUES:
**	The memchr() function returns a pointer to the byte located, or NULL if no
** such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*p;
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s)[i] != ((unsigned char)c))
		i++;
	if (i == n)
		return (0);
	else
	{
		p = &((unsigned char *)s)[i];
		return (p);
	}
}

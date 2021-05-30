/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:48:19 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 16:48:47 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The strlen() function computes the length of the string s.  The strnlen()
** function attempts to compute the length of s, but never scans beyond the
** first maxlen bytes of s.
**
** RETURN VALUES:
**	The strlen() function returns the number of characters that precede the
** terminating NUL character.  The strnlen() function returns either the same
** result as strlen() or maxlen, whichever is smaller.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

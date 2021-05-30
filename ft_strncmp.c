/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:52:04 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/15 11:50:41 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**  The strncmp() function compares not more than n characters. Because
** strncmp() is designed for comparing strings rather than binary data,
** characters that appear after a `\0' character are not compared.
**
** RETURN VALUES:
**  The strcmp() and strncmp() functions return an integer greater than,
** equal to, or less than 0, according as the string s1 is greater than,
** equal to, or less than the string s2.  The comparison is done using unsigned
** characters, so that `\200' is greater than `\0'.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

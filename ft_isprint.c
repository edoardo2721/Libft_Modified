/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:10:19 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 16:10:23 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The isprint() function tests for any printing character, including space
** (` ').  The value of the argument must be representable as an unsigned char
** or the value of EOF.
**
** RETURN VALUES:
**	The isprint() function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

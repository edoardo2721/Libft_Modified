/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:59:47 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 17:00:01 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The toupper() function converts a lower-case letter to the corresponding
** upper-case letter.  The argument must be representable as an unsigned char
** or the value of EOF.
**
** RETURN VALUES:
**	If the argument is a lower-case letter, the toupper() function returns the
** corresponding upper-case letter if there is one; otherwise, the argument is
** returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

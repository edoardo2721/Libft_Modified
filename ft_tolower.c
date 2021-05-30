/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:59:10 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 16:59:25 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The tolower() function converts an upper-case letter to the corresponding
** lower-case letter.  The argument must be representable as an unsigned char
** or the value of EOF.
**
** RETURN VALUES:
**	If the argument is an upper-case letter, the tolower() function returns the
** corresponding lower-case letter if there is one; otherwise, the argument is
** returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

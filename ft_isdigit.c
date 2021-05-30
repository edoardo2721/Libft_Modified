/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:05:15 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/11 16:05:23 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARy: Standard C Library
** DESCRIPTION:
**	The isdigit() function tests for a decimal digit character.  Regardless of
** locale, this includes the following characters only:
** ``0''		 ``1''		   ``2''		 ``3''		   ``4''
** ``5''		 ``6''		   ``7''		 ``8''		   ``9''
** The isnumber() function behaves similarly to isdigit(), but may recognize
** additional characters, depending on the current locale setting.
** The value of the argument must be representable as an unsigned char or the
** value of EOF.
**
** RETURN VALUES:
**	The isdigit() and isnumber() functions return zero if the character tests
** false and return non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

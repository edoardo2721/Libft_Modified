/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:33:50 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/15 11:40:30 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**  The value of the argument must be representable as an unsigned char or the
** value of EOF.
** In the ASCII character set, this includes the following characters (preceded
** by their numeric values, in octal):
** from 101 ``A'' to 132 ``Z'' and from 141 ``a'' to 172 ``z''
**
** RETURN VALUES:
**  The isalpha() function returns zero if the character tests false and returns
** non-zero if the character tests true.A
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

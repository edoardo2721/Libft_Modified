/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:40:11 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/13 15:41:26 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIpointTION:
**	The calloc() function contiguously allocates enough spointace for count
** objects that are size bytes of memory each and returns a point to the
** allocated memory.  The allocated memory is filled with bytes of value zero.
**
** RETURN VALUES:
**	If successful calloc() function return a point to allocated memory. If
** there is an error, they return a NULL point and set errno to ENOMEM.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*point;
	unsigned long	i;

	i = 0;
	point = (void *)malloc(count * size);
	if (!(point))
		return (NULL);
	while (i <= count * size)
		((unsigned char *)point)[i++] = 0;
	return (point);
}

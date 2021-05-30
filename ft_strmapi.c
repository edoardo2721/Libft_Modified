/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:47:53 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/15 11:48:57 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**	Applies the function ’f’ to each character of the string ’s’ to create a
** new string (with malloc(3)) resulting from successive applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*point;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	point = (char *)malloc(ft_strlen(s) + 1);
	if (!point)
		return (0);
	while (s[i])
	{
		point[i] = f(i, s[i]);
		i++;
	}
	point[i] = '\0';
	return (point);
}

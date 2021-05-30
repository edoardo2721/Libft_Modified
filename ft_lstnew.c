/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:57:26 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/18 17:57:39 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**	Allocates (with malloc(3)) and returns a new element.  The variable
** ’content’ is initialized with the value of the parameter ’content’.
** The variable ’next’ is initialized to NULL.
**
** RETURN VALUES:
**	The new element.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!(list))
		return (0);
	list->content = content;
	list->next = 0;
	return (list);
}

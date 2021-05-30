/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:57:11 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/18 17:57:14 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**	Iterates the list ’lst’ and applies the function ’f’ to the content of each
** element. Creates a new list resulting of the successive applications of the
** function ’f’. The ’del’ function is used to delete the content of an
** element if needed.
**
** RETURN VALUES:
**	The new list.  NULL if the allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cont;
	t_list	*new_lst;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		cont = ft_lstnew(f(lst->content));
		if (!cont)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, cont);
		lst = lst->next;
	}
	return (new_lst);
}

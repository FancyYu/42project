/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/23 13:01:54 by chsun         #+#    #+#                 */
/*   Updated: 2023/04/23 13:01:55 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*nextlst;

	if (!f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		nextlst = ft_lstnew((*f)(lst->content));
		if (!nextlst)
		{
			ft_lstclear(&newlst, del);
			lst = NULL;
			ft_lstclear(&nextlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, nextlst);
		lst = lst->next;
	}
	return (newlst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:56:36 by famacama          #+#    #+#             */
/*   Updated: 2020/01/18 15:51:22 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *dst;

	while (lst != NULL)
	{
		if (!(lst->next == NULL))
		{
			if (!(dst = malloc(sizeof(dst))))
				return (NULL);
		}
		else
			(del)(lst->content);
		dst->content = (f)(lst->content);
		lst = lst->next;
		dst = dst->next;
	}
	return (dst);
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*first;

	if (!lst)
		return (NULL);
	if (!(dst = ft_lstnew(f(lst->content))))
		return (NULL);
	first = dst;
	while (lst)
	{
		if (lst->next)
		{
			if (!(dst->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&first, del);
				return (0);
			}
			dst = dst->next;
		}
		lst = lst->next;
	}
	dst->next = NULL;
	return (first);
}

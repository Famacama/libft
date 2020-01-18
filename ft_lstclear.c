/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 13:30:16 by famacama          #+#    #+#             */
/*   Updated: 2020/01/18 14:47:37 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	struct s_list *tmp;
	struct s_list *next;

	tmp = *lst;
	while (tmp != NULL)
	{
		next = tmp->next;
		(del)(tmp->content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}

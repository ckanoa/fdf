/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckanoa  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:02:34 by ckanoa            #+#    #+#             */
/*   Updated: 2015/12/09 16:22:57 by ckanoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*lnext;

	list = *alst;
	while (list)
	{
		lnext = list->next;
		del(list->content, list->content_size);
		free(list);
		list = lnext;
	}
	*alst = NULL;
}

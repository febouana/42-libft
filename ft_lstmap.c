/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:34:52 by febouana          #+#    #+#             */
/*   Updated: 2023/11/22 13:30:22 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*v2v;

	if (!lst || !del || !f)
		return (NULL);
	tmp = lst;
	v2v = NULL;
	while (tmp)
	{
		new = ft_lstnew(f(tmp->content));
		if (!new)
		{
			ft_lstclear(&v2v, del);
			return (NULL);
		}
		ft_lstadd_back(&v2v, new);
		tmp = tmp->next;
	}
	return (v2v);
}

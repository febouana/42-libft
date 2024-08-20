/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:07:09 by febouana          #+#    #+#             */
/*   Updated: 2023/11/22 13:15:43 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*backup;

	if (!(*del) || !lst || !*lst)
		return ;
	backup = *lst;
	while (*lst && lst)
	{
		*lst = backup->next;
		ft_lstdelone(backup, (*del));
		backup = *lst;
	}
}

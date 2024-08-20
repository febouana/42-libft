/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:32:50 by febouana          #+#    #+#             */
/*   Updated: 2023/11/13 15:58:52 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *src, size_t len)
{
	char	*char_src;
	size_t	i;

	char_src = (char *)src;
	i = 0;
	while (i < len)
	{
		char_src[i] = '\0';
		i++;
	}
}

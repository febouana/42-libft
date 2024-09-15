/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:10:42 by febouana          #+#    #+#             */
/*   Updated: 2024/09/15 17:10:45 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	char_dest = (char *)dest;
	char_src = (char *)src;
	i = 0;
	while (i < len)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

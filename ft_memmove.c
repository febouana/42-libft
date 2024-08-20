/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:06:44 by febouana          #+#    #+#             */
/*   Updated: 2023/11/13 17:18:24 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	char_dest = (char *)dest;
	char_src = (char *)src;
	if (dest > src)
		while (len-- > 0)
			char_dest[len] = char_src[len];
	else
	{
		while (i < len)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	return (dest);
}

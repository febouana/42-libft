/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoet <apoet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:25:18 by febouana          #+#    #+#             */
/*   Updated: 2024/08/20 18:44:43 by apoet            ###   ########.fr       */
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

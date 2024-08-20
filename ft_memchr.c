/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:39:35 by febouana          #+#    #+#             */
/*   Updated: 2023/11/13 16:05:22 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cc;

	i = 0;
	str = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i != (size_t)n)
	{
		if (str[i] == cc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

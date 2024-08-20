/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:31:52 by febouana          #+#    #+#             */
/*   Updated: 2023/11/16 13:56:26 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!dest || !src) && (dest_size == 0))
		return (ft_strlen(""));
	while ((dest[i] != '\0') && (i < dest_size))
		i++;
	while ((src[j]) && (i + j + 1) < dest_size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < dest_size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

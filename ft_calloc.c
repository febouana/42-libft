/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:27:22 by febouana          #+#    #+#             */
/*   Updated: 2023/11/16 19:51:07 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*audd;
	size_t			i;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (0);
	i = 0;
	audd = malloc(nmemb * size);
	if (!audd)
		return (NULL);
	while (i < nmemb * size)
	{
		audd[i] = 0;
		i++;
	}
	return (audd);
}

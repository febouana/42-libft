/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:33:22 by febouana          #+#    #+#             */
/*   Updated: 2023/11/29 15:34:40 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str_temp;

	str_temp = (unsigned char *)str;
	while (n > 0)
	{
		*(str_temp++) = (unsigned char)c;
		n--;
	}
	return (str);
}

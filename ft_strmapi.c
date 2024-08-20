/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:45:04 by febouana          #+#    #+#             */
/*   Updated: 2023/11/21 19:11:08 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ns;

	if (!s)
		return (NULL);
	ns = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ns)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		ns[i] = (*f)(i, s[i]);
		i++;
	}
	ns[i] = 0;
	return (ns);
}

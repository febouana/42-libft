/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:34:41 by febouana          #+#    #+#             */
/*   Updated: 2023/11/24 18:03:42 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	start;
	size_t	end;
	char	*ss;

	ss = 0;
	if (s && set)
	{
		start = 0;
		end = ft_strlen(s);
		while (s[start] && ft_strchr(set, s[start]))
			start++;
		while (s[end - 1] && ft_strchr(set, s[end - 1]) && end > start)
			end--;
		ss = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!ss)
			return (NULL);
		ft_strlcpy(ss, (s + start), (end - start + 1));
	}
	return (ss);
}

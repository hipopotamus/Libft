/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwopa <sungwopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:47:01 by sungwopa          #+#    #+#             */
/*   Updated: 2021/05/08 21:59:36 by sungwopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t len_needle;
	size_t len_haystack;

	len_needle = ft_strlen(needle);
	len_haystack = ft_strlen(haystack);
	i = 0;
	if (len_needle == 0)
		return ((char*)haystack);
	if (len > len_haystack)
		len = len_haystack;
	while (i + len_needle <= len)
	{
		if (ft_strncmp(haystack + i, needle, len_needle) == 0)
		{
			return ((char*)haystack + i);
		}
		i++;
	}
	return (NULL);
}

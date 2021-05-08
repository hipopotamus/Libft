/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwopa <sungwopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:36:11 by sungwopa          #+#    #+#             */
/*   Updated: 2021/05/03 21:41:34 by sungwopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, coonst char *s2, size_t  n)
{
	size_t i;
	
	i = 0;
	while(i < n && s1[i] && s2[i])
	{
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
		{
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:26:18 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/06 16:11:16 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_start;

	s_start = s;
	while (*s)
		s++;
	while (s >= s_start)
	{
		if (*s == (unsigned char) c)
			return ((char *) s);
		s--;
	}
	return (NULL);
}

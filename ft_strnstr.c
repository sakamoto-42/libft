/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:27:53 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/06 16:11:01 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*big_start;
	const char	*big_ptr;
	const char	*little_ptr;

	if (!*little)
		return ((char *)big);
	big_start = big;
	while (*big && (size_t)(big - big_start) < len)
	{
		big_ptr = big;
		little_ptr = little;
		while (*big_ptr && *little_ptr
			&& *big_ptr == *little_ptr && (size_t)(big_ptr - big_start) < len)
		{
			big_ptr++;
			little_ptr++;
		}
		if (!*little_ptr)
			return ((char *)big);
		big++;
	}
	return (NULL);
}

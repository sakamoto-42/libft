/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:26:55 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/06 16:11:32 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*haystack_ptr;
	const char	*needle_ptr;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		haystack_ptr = haystack;
		needle_ptr = needle;
		while (*haystack_ptr && *needle_ptr && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (!*needle_ptr)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

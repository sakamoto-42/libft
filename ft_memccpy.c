/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:10:07 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/06 16:03:22 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*dest_ptr;
	const unsigned char		*src_ptr;
	size_t					i;
	unsigned char			to_find;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *) dest;
	src_ptr = (const unsigned char *) src;
	i = 0;
	to_find = (unsigned char) c;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		if ((unsigned char) dest_ptr[i] == to_find)
			return ((void *)(dest_ptr + i + 1));
		i++;
	}
	return (NULL);
}

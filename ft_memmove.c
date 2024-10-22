/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:11:19 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/22 13:28:13 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_start;
	const unsigned char	*src_start;
	unsigned char		*dest_end;
	const unsigned char	*src_end;

	if (!dest || !src)
		return (NULL);
	dest_start = (unsigned char *)(dest);
	src_start = (const unsigned char *)src;
	dest_end = dest_start + n;
	src_end = src_start + n;
	if (dest_start < src_start)
	{
		while (n--)
			*dest_start++ = *src_start++;
	}
	else
	{
		while (n--)
			*--dest_end = *--src_end;
	}
	return (dest);
}

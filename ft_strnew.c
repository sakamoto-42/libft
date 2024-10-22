/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:38:46 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/20 14:17:45 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*str;

	str = (unsigned char *) ft_memalloc(size + 1);
	if (!str)
		return (NULL);
	ft_bzero((void *) str, size + 1);
	return ((char *)str);
}

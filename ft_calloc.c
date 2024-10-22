/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:43:53 by julien            #+#    #+#             */
/*   Updated: 2024/10/21 18:11:23 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	mem = ft_memalloc(num * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, num * size);
	return (mem);
}

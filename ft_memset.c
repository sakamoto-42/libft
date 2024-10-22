/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:06:16 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/06 16:02:45 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	mem_val;
	size_t			i;

	ptr = (unsigned char *) s;
	mem_val = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		ptr[i] = mem_val;
		i++;
	}
	return (s);
}

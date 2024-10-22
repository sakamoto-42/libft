/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:16:53 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/13 14:17:10 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*dest;
	size_t		s_len;

	s_len = ft_strlen(s);
	dest = ft_strnew(s_len);
	if (!dest)
		return (NULL);
	dest = ft_strcpy(dest, s);
	return (dest);
}

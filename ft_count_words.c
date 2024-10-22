/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:56:18 by julien            #+#    #+#             */
/*   Updated: 2024/10/22 11:07:12 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	word_count;
	int		is_new_word;

	word_count = 0;
	is_new_word = 1;
	while (*s)
	{
		if (is_new_word && *s != c)
		{
			word_count++;
			is_new_word = 0;
		}
		else if (*s == c)
			is_new_word = 1;
		s++;
	}
	return (word_count);
}

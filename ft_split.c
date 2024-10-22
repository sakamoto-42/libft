/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:59:24 by julien            #+#    #+#             */
/*   Updated: 2024/10/22 11:30:56 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_free_tabstr(char **tabstr, size_t i)
{
	while (i > 0)
		free(tabstr[--i]);
	free(tabstr);
}

static int	ft_extract_words(char **tabstr, size_t word_count,
	char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	while (i < word_count)
	{
		while (s[start] && s[start] == c)
			start++;
		len = 0;
		while (s[start + len] && s[start + len] != c)
			len++;
		tabstr[i] = ft_substr(s, start, len);
		if (!tabstr[i])
		{
			ft_free_tabstr(tabstr, i);
			return (0);
		}
		start += len;
		i++;
	}
	tabstr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**tabstr;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	tabstr = (char **) malloc((word_count + 1) * sizeof(*tabstr));
	if (!tabstr)
		return (NULL);
	if (!ft_extract_words(tabstr, word_count, s, c))
		return (NULL);
	return (tabstr);
}

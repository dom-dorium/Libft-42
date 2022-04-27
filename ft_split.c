/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:42:01 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/27 16:10:54 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordscount(const char *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			words++;
		i++;
	}
	return (words);
}

static char	*splitter(const char *s, char c, int *i)

{
	char	*str;
	int		k;

	k = 0;
	while (s[*i] == c)
			(*i)++;
	while (s[*i] != c && s[*i])
	{
		(*i)++;
		k++;
	}
	str = ft_substr(s, *i - k, k);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;
	int		words;

	if (s == NULL)
		return (NULL);
	words = wordscount(s, c);
	strings = ft_calloc(words + 1, sizeof(char *));
	if (strings == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		strings[j] = splitter(s, c, &i);
		j++;
	}
	return (strings);
}

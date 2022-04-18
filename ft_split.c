/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:42:01 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/18 15:46:00 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

static char	*splitter(const char *s, char c, int *starter)

{
	char	*str;
	int		i;
	int		k;

	k = 0;
	i = *starter;
	while (s[i] == c)
			i++;
	while (s[i] != c && s[i])
	{
		i++;
		k++;
	}
	str = ft_calloc(i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_substr(s, i - k, k);
	*starter = i;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;
	int		words;
	int		*ptr;

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
		ptr = &i;
		strings[j] = splitter(s, c, ptr);
		j++;
	}
	return (strings);
}
// libftTester Leaks a checker
// enfin fini split 

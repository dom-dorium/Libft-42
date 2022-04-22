/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:41:51 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/22 17:47:22 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		k;
	int		i;
	int		j;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	j = 0;
	k = 0;
	i = ft_strlen(s1);
	while (s1[j] && checker(set, s1[j]))
		++j;
	while (i > j && checker(set, s1[i - 1]))
		--i;
	str = ft_calloc(i - j + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (j < i)
		str[k++] = s1[j++];
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:41:05 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/22 17:47:25 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	strl;

	i = start;
	j = 0;
	if (s == NULL)
		return (NULL);
	strl = ft_strlen(s);
	if (len > strl)
		len = strl;
	str = ft_calloc(sizeof (char), len + 1);
	if (str == NULL)
		return (NULL);
	while (i < strl && j < len)
		str[j++] = s[i++];
	return (str);
}

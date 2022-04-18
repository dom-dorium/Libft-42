/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:15:48 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/05 11:59:55 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (s[i] != s[0])
	{	
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == ((char) c))
		return ((char *) &s[i]);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:17:09 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/13 13:18:43 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;	

	i = 0;
	while (s[i])
	{
		if (s[i] == ((char) c))
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == ((char) c))
		return ((char *) &s[i]);
	return (NULL);
}

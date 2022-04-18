/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:35:17 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/05 13:47:51 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*source;
	char	*dest;

	if (dst == NULL && src == NULL)
		return (NULL);
	source = ((char *)src);
	dest = ((char *)dst);
	i = 0;
	if (dest > source)
	{
		while (len-- > 0)
			dest[len] = source[len];
	}
	else
	{	
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}

// If the destination is longer than the source you must copy the source 
// into the dst. before copying bytes to the -
// lenght or it will do the same as memcpy.

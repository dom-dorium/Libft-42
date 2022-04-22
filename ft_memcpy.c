/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:25:16 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/22 17:45:10 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*retour;

	if (dst == NULL && src == NULL)
		return (NULL);
	str = ((char *)src);
	retour = ((char *)dst);
	i = 0;
	while (i < n)
	{
		retour[i] = str[i];
		i++;
	}
	return ((void *)retour);
}

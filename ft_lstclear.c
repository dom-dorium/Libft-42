/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:24:51 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/22 17:44:38 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*hold;

	ptr = *lst;
	while (ptr)
	{
		hold = ptr->next;
		ft_lstdelone(ptr, del);
		ptr = hold;
	}
	*lst = NULL;
}

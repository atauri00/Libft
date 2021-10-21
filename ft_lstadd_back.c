/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:29:45 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/10/20 18:29:53 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (!(*lst))
		*lst = new;
	while (last != NULL)
	{
		if (last->next == NULL)
		{
			last->next = new;
			break ;
		}
		last = last->next;
	}
}

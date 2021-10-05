/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:29:41 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/09/24 18:41:29 by adiaz-de         ###   ########.Urdlz    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);

	if (ptr != NULL)
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
	return (NULL);
}

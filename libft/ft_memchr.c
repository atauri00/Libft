/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:33:12 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/09/24 17:07:17 by adiaz-de         ###   ########.Urdlz    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char)c) == *(unsigned char *)(s + i))
			return((void *) (s + i));
		i++;
	}
	return (0);
}

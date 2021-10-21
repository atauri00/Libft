/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:54:05 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/10/20 17:54:52 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	y;
	unsigned int	z;
	int				x;

	x = 0;
	y = 0;
	z = 0;
	while (src[x])
		x++;
	if (n == 0)
		return (x);
	while (dest[y])
		y++;
	if (n <= y)
		return (n + x);
	while (n && (--n - y) && src[z])
	{
		dest[y + z] = src[z];
		z++;
	}
	dest[y + z] = '\0';
	return (x + y);
}

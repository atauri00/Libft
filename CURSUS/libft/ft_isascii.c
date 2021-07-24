/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:42:31 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/07/22 17:01:45 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	printf ("valor 1: %d\n", ft_isascii('1'));
	printf ("valor 2: %d\n", ft_isascii(' '));
	printf ("valor 3: %d\n", ft_isascii(128));
	return (0);
}

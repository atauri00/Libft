/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 17:03:57 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/07/22 17:27:48 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(void)
{
	printf ("valor 1: %d\n", ft_isprint('1'));
	printf ("valor 2: %d\n", ft_isprint(' '));
	printf ("valor 3: %d\n", ft_isprint(32));
	return (0);
}

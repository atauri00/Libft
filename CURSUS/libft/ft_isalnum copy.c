/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:59:02 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/07/22 15:42:06 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

int	main(void)
{
	printf ("valor 1: %d\n", ft_isalnum('d'));
	printf ("valor 2: %d\n", ft_isalnum('2'));
	printf ("valor 3: %d\n", ft_isalnum('\t'));
	printf ("valor 4: %d\n", ft_isalnum(' '));
	return (0);
}

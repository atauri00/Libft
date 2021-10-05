/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:59:02 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/08/14 14:12:21 by adiaz-de         ###   ########.Urdlz    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf ("valor 1: %d\n", ft_isalnum('d'));
	printf ("valor 2: %d\n", ft_isalnum('2'));
	printf ("valor 3: %d\n", ft_isalnum('\t'));
	printf ("valor 4: %d\n", ft_isalnum(' '));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:41:02 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/07/22 20:25:56 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	while (n >= 0)
	{
		((unsigned char *)str)[n] = c;
		n--;
	}
	return (str);
}

int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);
	memset(str, '$', 7);
	puts(str);
	return (0);
}

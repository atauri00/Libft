/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:48:27 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/07/22 19:09:23 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t	ft_strlen(const char *str)
	{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	str[50];
	int		len;

	strcpy(str, "PUTAKASKA");
	len = ft_strlen(str);
	printf("Length of |%s| is |%d|\n", str, len);
	return (0);
}

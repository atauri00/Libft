/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:13:21 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/10/20 18:14:10 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	pos;
	size_t	count;

	if (!s1 || !s2)
		return (NULL);
	s3 = (char *) malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!s3)
		return (NULL);
	pos = 0;
	count = 0;
	while (count < ft_strlen(s1))
	{
		s3[pos++] = s1[count++];
	}
	count = 0;
	while (count < ft_strlen(s2))
		s3[pos++] = s2[count++];
	s3[pos] = '\0';
	return (s3);
}

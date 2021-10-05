/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:30:44 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/10/05 13:10:12 by adiaz-de         ###   ########.Urdlz    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	end;
	size_t	count;

	if (!s)
		return (0);
	end = 0;
	if (start < ft_strlen(s))
		end = ft_strlen(s) - start;
	if (end > len)
		end = len;
	s2 = (char *)malloc(sizeof(char) * (end + 1));
	if (!s2)
		return (0);
	//ft_strlcpy(s2, s + start, end + 1);
	count = 0;
	if (ft_strlen(s) > start)
		while (count < len && s[start + count])
		{
			s2[count] = s [start + count];
			count++;
		}
	s2[count] = '\0';
	return (s2);
}


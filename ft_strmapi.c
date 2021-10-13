/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:38:52 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/10/13 13:38:52 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	idx;
	char	*tmp;

	if (s == NULL)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!s || !f || !tmp)
		return (NULL);
	idx = 0;
	while (idx < (ft_strlen((char *)s)))
	{
		tmp[idx] = f(idx, s[idx]);
		idx++;
	}
	tmp[idx] = '\0';
	return (tmp);
}
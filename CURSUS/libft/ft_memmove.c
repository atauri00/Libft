/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 00:35:43 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/08/03 00:35:43 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char *aux;

    i = 0;
    while (i < ft_strlen(src))
    {
        ((unsigned char *)aux)[i] = ((unsigned char *)src)[i];
        i++;
    }

    i = 0;
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)aux)[i];
        i++;
    }
    return (dest);
}


int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memmove(dest, src, ft_strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
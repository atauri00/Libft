#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
  int i;

  i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
    i++;
	}
	return (str);
}

void ft_bzero(void *str, int n)
{
  ft_memset(str, '\0', n);
}

int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 7);
	puts(str);
	puts("al");
	return (0);
}

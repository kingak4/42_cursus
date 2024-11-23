#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((dest[i]!= '\0') && (i < size - 1))
	{
		i++;
	}
	while ((src[j] != '\0') && (1 < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (src[j] != '\0')
	{
		j++;
	}
	return (i + j);
}
/*
int main()
{
	char	dest[30] = "hejka";
	char	src[] = " jak tam ?";
	size_t	result;

	result = ft_strlcat(dest, src, sizeof(dest));
	printf("%zu\n", result);
	printf("%s\n", dest);
	return(0);
}
*/
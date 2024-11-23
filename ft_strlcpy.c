#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (*(src + len) && (--size))
	{
		*dest++ = *(src + len++);
	}
	*dest = '\0';
	while (*(src + len))
	{
		++len;
	}
	return(len);
}
/*
int main()
{
	unsigned int	len;
	char	src[] = "hej, jak się masz?";
	char	dest[4];

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("%u\n", len);
	printf("%s\n", dest);
	return(0);
}
*/
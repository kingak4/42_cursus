#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d = dest;
	const unsigned char	 *s = src;
	while(n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
/*
int main()
{
	char	src[] = "czesc";
	char	dest[6];
	ft_memcpy(dest, src, 6);
	printf("%s\n", dest);
	return(0);
}
*/
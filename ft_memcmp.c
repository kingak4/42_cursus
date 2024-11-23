#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*k1 = (const unsigned char *)s1;
	const unsigned char	*k2 = (const unsigned char *)s2;

	while(n--)
	{
		if (*k1 != *k2)
		{
			return(*k1 - *k2);
		}
		k1++;
		k2++;
	}
	return(0);
}
/*
int main()
{
	char	s1[] = "bigos";
	char	s2[] = "bigos";

	printf("%d\n", ft_memcmp(s1, s2, 5));
	return (0);
}
*/
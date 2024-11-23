#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	 *x = (unsigned char *)s;
	unsigned char	i = (unsigned char )c;

		while(n--)
		{
			if( *x == i)
			{
				return (void *)x;
			}
			x++;
		}
	return (NULL);
}
/*
int main()
{
	char	s[] = "bigos";
	int	 c = 'g';
	char	*result;
	result = ft_memchr(s, c, 5);
	printf("%s\n", result);
	return(0);
}
*/
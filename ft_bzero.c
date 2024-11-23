#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr =(unsigned char *)s;
	while(n--)
	{
		*ptr++ = '\0';
	}
}
/*
int main()
{
	char	buffer[10] = "abcedfghij";
	int	i ;

	i = 0;
	ft_bzero(buffer, sizeof(buffer));
	while(i < 10)
	{
		printf("%d\n", buffer[i]);
		i++;
	}
	return(0);
}
*/
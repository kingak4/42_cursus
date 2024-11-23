#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
unsigned char	*ptr = (unsigned char *)str;
while (n--)
{
	*ptr++ = (unsigned char)c;
}
	return (str);
}
/*
int main()
{
char	buffer[10];
int i = 0;
ft_memset(buffer, 'A', sizeof(buffer));
while ( i < 10)
{
printf("%c ", buffer[i]);
i++;
}
return(0);
}
*/
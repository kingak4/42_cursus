#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while(s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
// int main()
// // {
// 	char	s[] = "hello";

// 	s[0] = 'H';
// 	s[1] = 'E';
// 	printf("%s\n", s);
// 	return(0);
// }
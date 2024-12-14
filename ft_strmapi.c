#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;
	
	i = 0;
	while (s[i]!= '\0')
	{
		i++;
	}
	str = (char	*)malloc(sizeof(char)*(i + 1));
	if (!str)
	{
		return(NULL);
	}
	
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}
// int main()
// {
// 	char	*s = "hello";

// 	s = "hi";
// 	printf("%s\n", s);
// 	return(0);
// }
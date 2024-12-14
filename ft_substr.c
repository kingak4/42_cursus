#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s)
	{
		return(NULL);
	}
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0) 
    {
        return (NULL);
    }

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i >= start) && (j < len))
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
// int main()
// {
// 	char	s[] = "hello world!";
// 	char	*sub;

// 	sub = ft_substr(s, 6, 5);
// 	printf("%s\n", sub);

// 	free(sub);
// 	return(0);
// }
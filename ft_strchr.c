#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == (char)c)
			return ((char *)&str[i]);
			i++;
	}
	if(c == '\0')
		return ((char *)&str[i]);
	
	return (NULL);
}
/*
int main()
{
	char	str[] = "elo melo";
	int	c = 'e';
	char	*result;
	result = ft_strchr(str, c);
	printf("%s\n", result);
	return(0);
}
*/
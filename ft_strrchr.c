#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while(i >= 0)
	{
		if (str[i] == (char)c)
		{
		return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char	str[] = "karktek";
	int	c = 'e';
	char *result;
	result = ft_strrchr(str, c); 

	printf("Znaleziono: %s\n", result);
}
*/
#include <stdio.h>

char	*ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}
/*
int main()
{
	char	str[] = "abcd";
	ft_toupper(str);
	printf("%s\n", str);
	return(0);
}
*/
#include <stdio.h>

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0) && (str[i] <=127))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main()
{
	char	str[] = "hej 1!";
	ft_isascii(str);
	printf("%d\n", (ft_isascii(str)));
	return(0);
}
*/
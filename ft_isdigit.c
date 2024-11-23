#include <stdio.h>

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
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
	char	str[] = "1234567A90";
	ft_isdigit(str);
	printf("%d\n", (ft_isdigit(str)));
	return(0);
}
*/
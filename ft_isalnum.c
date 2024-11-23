#include <stdio.h>

int	ft_isalnum(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90) || (str[i] >= 97) && (str[i] <= 122) || (str[i] >= 48) && (str[i] <= 57))
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
	char	str[] = "Xd4 ";
	ft_isalnum(str);
	printf("%d\n", (ft_isalnum(str)));
	return(0);
}
*/
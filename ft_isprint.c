#include <stdio.h>

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
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
	char	str[] = "ELO320!!";
	ft_isprint(str);
	printf("%d\n",(ft_isprint(str)));
	return(0);
}
*/
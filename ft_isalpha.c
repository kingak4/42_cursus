#include <stdio.h>

int	ft_isaplha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 65) && (str[i] <= 90))|| ((str[i] >= 97) && (str[i] <= 122)))
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
/*int main()
{
	char	str[] = "AaBBcc44";
	ft_isaplha(str);
	printf("%d\n", (ft_isaplha(str)));
	return(0);
}
*/
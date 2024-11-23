

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

//int main()
//{
//    //char *s1 = NULL;
//    char       s[] = "hej";
//    printf("%d\n", ft_strlen(s));
//    return(0);
//}
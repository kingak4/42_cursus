#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[1] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] == s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
char	s1[] = "hej";
char	s2[] = "heje";
unsigned int	n = 4;

ft_strncmp(s1, s2, n);
printf("%d\n", ft_strncmp(s1, s2, n));
return (0);
}
*/
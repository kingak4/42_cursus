#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int	i;
	char	*str;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}

	str = (char *) malloc(sizeof(*str) * (i + 1));
	if(!str)
	{
	return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}
/*
int main()
{
	char	s[] ="srebrny";

	char	*duplicated = ft_strdup(s);
	printf("%s\n", duplicated);
	free(duplicated);
	return(0);

}
*/
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if(!s)
	{
		return;
	}
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
// int main()
// {
// 	char	*s = "hi";

// 	ft_putstr_fd(s, 1);
// 	return(0);
// }
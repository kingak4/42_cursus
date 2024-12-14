#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
	{
		return;
	}
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
// int main()
// {
// 	char	*s = "hi";

// 	ft_putendl_fd(s, 1);
// 	return(0);

// }
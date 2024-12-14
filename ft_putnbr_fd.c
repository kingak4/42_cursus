#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		write(fd, "0", 1);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n/10, fd);
	}
	write(fd, &"0123456789"[n % 10], 1);
}
// int main()
// {
// 	int	n = 123456;

// 	ft_putnbr_fd(n, 1);
// 	return(0);
// }
#include "minitalk.h"

void	print_bits(int bit)
{
	static int				i;
	static unsigned char	x;

	if (bit == SIGUSR2)
		x = x << 1;
	else if (bit == SIGUSR1)
		x = (x << 1) | 0b00000001;
	i++;
	if (i == 8)
	{
		ft_printf("%x", x);
		i = 0;
		x = 0;
	}
}

int	main(void)
{
	ft_printf("\t Server PID: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR1, print_bits);
		signal(SIGUSR2, print_bits);
		pause();
	}
	return (0);
}
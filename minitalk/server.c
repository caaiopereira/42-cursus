#include "minitalk.h"

void	print_bit(int bit)
{
	static int				i;
	static unsigned char	c;

	if (bit == SIGUSR2)
		c = c << 1;
	else if (bit == SIGUSR1)
		c = (c << 1) | 0b00000001;
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	ft_printf("\t Server PID: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR1, print_bit);
		signal(SIGUSR2, print_bit);
		pause();
	}
	return (0);
}
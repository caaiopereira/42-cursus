#include "minitalk.h"

void	send_bits(int pid, char *str)
{
	int	i;
	int	x;

	i = 0;
	while (*str)
	{
		x = *(str);
		while (i < 8)
		{
			if (x << i & 0b10000000)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i++;
			usleep(500);
		}
		str++;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !argv[2])
	{
		ft_printf("Error! Você deve informar");
		ft_printf(" <PID> <MENSAGEM>\n");
		exit(1);
	}
	send_bits(ft_atoi(argv[1]), argv[2]);
	return (0);
}
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int x = 0;

	if (ac == 3)
	{
		while(av[1][i] && av[2][x])
		{
			if(av[1][i] == av[2][x])
				i++;
			x++;
		}
		if (av[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}

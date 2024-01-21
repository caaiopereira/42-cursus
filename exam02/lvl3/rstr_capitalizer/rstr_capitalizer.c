#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' \ 
					|| str[i + 1] == '\t' || str[i + 1] == '\0' ))
			str[i] = str[i] - 32;
		write(1, &str[i++], 1);
		//i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while(av > i)
		{
			rstr_capitalizer(av[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return 0;
}

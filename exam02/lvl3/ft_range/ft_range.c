#include <stdlib>// malloc

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);

	while(len > i)
	{
		if(end > start)
		{
			res[i] = start;;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return res;
}

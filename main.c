#include <unistd.h>
#include <stdio.h>

static int	hashage(const char *str)
{
	int	i = 0;
	long long	HashValue = 0;

	while(str[i] != '\0')
	{
		HashValue = HashValue + (str[i] * (i | 0b1 << 8));
		i++;
	}
	return ( (int)(HashValue % 10000));
}

int main(int a, char ** b)
{
	char	buf[30];
	int		i = 1000;
	

	printf("%d\n", hashage(b[1]));
	printf("%d\n", hashage(b[2]));
		printf("\n");

}

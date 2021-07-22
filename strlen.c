#include <unistd.h>

int main()
{
	int	i;
	for(i = '0'; i < '9'; i++)
		write(1, &i, 1);
}

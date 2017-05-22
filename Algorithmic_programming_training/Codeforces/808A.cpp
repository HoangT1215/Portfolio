#include <cstdio>

int n;
int tmp, ten;

int main()
{
	scanf("%d", &n);

	tmp = n;
	ten = 1;

	while(tmp>9)
	{
		tmp/=10;
		ten*=10;
	}

	printf("%d\n", (tmp+1)*ten-n);
}
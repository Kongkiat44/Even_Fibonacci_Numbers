#include<stdio.h>
#include<math.h>
int main()
{
	int num[40], sum = 0, i;
	num[0] = 1;
	num[1] = 2;
	sum += num[1];
	for (i = 2; 1; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
		if (num[i] <= (4 * pow(10, 6)))
		{
			if (num[i] % 2 == 0) sum += num[i];
		}
		else break;
	}
	printf("%d", sum);
	return 0;
}
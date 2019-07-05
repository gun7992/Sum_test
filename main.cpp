#include <stdio.h>
#include "sum.h"

int main()
{
	int n;
	scanf("input : %d",&n);
	int s = sum(n);
	printf("sum = %d\n",s);
	return 0;
}

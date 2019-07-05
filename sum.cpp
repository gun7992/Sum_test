#include "sum.h"

int sum(int n)
{
	int r = 0;
	int i = 0;
	for(i = 1 ; i <= n ; i++)
		r += i;
	return r;
}


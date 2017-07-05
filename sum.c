#include "sum.h"

int sum(int n) {
	int i;
	int sum = 0;
	for(i=0;i<n;i++)	{
		sum += i + 1;
	}
	return sum;
}

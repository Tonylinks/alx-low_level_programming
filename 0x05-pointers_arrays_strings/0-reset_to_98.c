#include "main.h"

void reset_to_98(int *n);

int main (void)
{
	int i;
	int *p = &i;
	i = 402;
	
	void reset_to_98(int *n)
	{
		*n = 98;
	}

	reset_to_98(p);
 
}

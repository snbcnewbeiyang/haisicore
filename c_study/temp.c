#include <stdio.h>
#include <stdlib.h>

void main(void)
{
//	char* arr[] = {"123","456","789"};
	char arr[][] = {{'1','2','3'},{'4','5','6'}};
	char** p = arr;

	for(int i = 0; i < 3; i++)
	{
		printf("%s\n",p[i]);
	}
}

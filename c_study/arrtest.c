#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char arr1[] = {'a','b','\0','c',0};
	printf("length = %d\n",strlen(arr1));

	char arr2[] = "abcdef\0";
	//printf("arr2 length = %d\n",sizeof(arr2)/sizeof(arr2[0]));
	printf("arr2 length = %d\n",strlen(arr2));
}

#include <stdio.h>

int* fun();

void main(void)
{
	int* p=NULL;
	p=fun();
//	funn(&p);
	if(p){
		printf("-------");
	}else{
		printf("+++++++");
	};
}

int* fun()
{
	int arr[10];
	return arr;
//	return (int*)malloc(sizeof(int)*10);
}

void funn(int** p)
{
//	*p=(int*)malloc(sizeof(int)*10);
	int arr[10];
	*p=arr;
	printf("--%x\n",p);
}

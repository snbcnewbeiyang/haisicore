#include <stdio.h>

const bb=90;

void fun(char** p,int* len)
{
	char* t = (char*)malloc(sizeof(char)*10);
	*p=t;
	strcpy(*p,"111111111");
	*len=strlen(*p);
}

void main(void)
{
	char *p = NULL;
	int len;
	fun(&p,&len);
	if(p!=NULL)
	{
		printf("%s,%d",p,len);
	}
}

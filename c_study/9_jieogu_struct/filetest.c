#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	FILE* fp = fopen("filetest_file.txt","w+");
	if(fp<0)
	{
		printf("oopen the file is wrong!\n");
		return;
	}
/*	char *charss = (char*)malloc(sizeof(char)*10);
	strcpy(charss,"asdfghjkl;\n");
	for(int i=0;i<10;i++)
	{
		fputs(charss,fp);
	}
*/
	char *buff = (char*)malloc(20);
	while(!feof(fp))
	{
/*		printf("-------");
		memset(buff,0,20);
		char *dd = fgets(buff,sizeof(buff),fp);
		if(!dd)
		{
			printf("read wrong");
			return;
		}
		printf("%s",buff);
		printf("-------");
		*/

		printf("%c,",fgetc(fp));
	}
	fclose(fp);

}

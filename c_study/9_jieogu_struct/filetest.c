#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
	char name[20];
	char sex;
};

void main(void)
{

	struct stu *p1=(struct stu*)malloc(sizeof(struct stu));
	strcpy(p1->name,"aaaaa");
	p1->sex = 'f';
	struct stu *p2=(struct stu*)malloc(sizeof(struct stu));
	strcpy(p1->name,"bbbbb");
	p1->sex = 'f';
	struct stu *p3=(struct stu*)malloc(sizeof(struct stu));
	strcpy(p1->name,"ccccc");
	p1->sex = 'w';
	struct stu arr[]={p1,p2,p3};

	FILE* fp = fopen("filetest_file.txt","w");
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
	int ret = fwrite(arr,sizeof(arr[0]),/*sizeof(arr)/sizeof(arr[0])*/3,fp);
	printf("the result is: %d\n",ret);
	
/*	if(fp<0)
	{
		printf("oopen the file is wrong!\n");
		return;
	}
	int a;
	int b;
	int c;
	fscanf(fp,"%d %d %d\n",&a,&b,&c);
	printf("%d %d %d\n",a,b,c);
*/
//	int jj = fprintf(fp,"%d %d %d\n",99,100,101);
	//fflush(fp);
//	printf("%d\n",jj);

/*	char *charss = (char*)malloc(sizeof(char)*10);
	strcpy(charss,"asdfghjkl;\n");
	for(int i=0;i<10;i++)
		fputs(charss,fp);
	}
	*/

/*	char *buff = (char*)malloc(20);
	while(!feof(fp))
	{
		memset(buff,0,20);
		char *dd = fgets(buff,sizeof(buff),fp);
		if(!dd)
		{
			printf("read wrong");
			return;
		}
		printf("%s",buff);

		printf("%c",fgetc(fp));
	}*/
	fclose(fp);

}

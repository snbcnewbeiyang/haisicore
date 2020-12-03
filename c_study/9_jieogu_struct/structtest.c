#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct phone
{
	char phonenum[11];
	char type;
};

struct stu
{
	int num;
	char name[20];
	char sex;
	float score;
	char *desc;
	struct phone connect;
};

void main(void)
{
	struct stu p1;
	//p1 = {10,"aaaa",'w',99};
	char descc[50];
	p1.desc = descc;
//	p1.desc=(char*)malloc(sizeof(char)*100);
	strcpy(p1.desc,"111111111111111");
	strncpy(p1.name,"aaaaaaa",4);
	strcpy(p1.connect.phonenum,"13992558334");
	p1.connect.type = '2';

	struct stu p2 = {2,"bbb",'f',100};
	struct stu p3 = {1,"ac",'w',29};
	struct stu p4 = {9,"ggg",'w',69};
	struct stu p5 = {6,"ghhh",'w',69};
	struct stu *p6 = (struct stu*)malloc(sizeof(struct stu));
	
	strcpy(p1.name,"ccccccccccc");

	struct stu class_1[6] = 
	{
		p1,p2,p5,p4,p3,*p6
	};

	for(int i=0;i<sizeof(class_1)/sizeof(class_1[0]);i++)
	{
		struct stu *p = &class_1[i];
		printf("num = %d, name = %s, sex = %c, score = %f, desc = %s,phone num = %c,%s\n",
			p->num,p->name,p->sex,p->score,p->desc,p->connect.type,p->connect.phonenum);
	}
}

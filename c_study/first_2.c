#include <stdio.h>

#define IN 1
#define OUT 0 

//统计输入的行数和字符数,单词数量
void main(void)
{
	int charnum,linenum,worldnum;
	charnum = linenum = worldnum = 0;
	int stat = OUT;
	int c;
	while(c = getchar() != EOF)
	{
		charnum++;

		//判断单词的标准
		if(c == ' ' || c == '\n' || c == '\t')
		{
			stat == OUT;
		}
		else if(stat == OUT)
		{
			stat = IN;
			++worldnum;
		}

		if(c == '\n')
			linenum++;
	}
	printf("char num = %d,line num = %d,world num = %d\n",charnum,linenum,worldnum);
}

# include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

//摄氏度和温度之间的换算关系  
void main(void)
{

	float fahr,celsius;

//方式1,使用while
	while(fahr <= UPPER)
	{
		celsius = 5.0 * (fahr - 32) / 9.0;
//		printf("%3.0f,%6.1f\n",fahr,celsius);
		fahr += STEP;
	}
	
//方式2,使用for,更加的紧凑
//注意在第一个地方必须要写fahr=0,不能不写,不写程序出错
	for(fahr = 0;fahr <= UPPER;fahr += STEP)
	{
		//printf("%3.0f,%6.2f\n",fahr,5.0 * (fahr - 32) /9.0 );
	}

	printf("%d\n",getchar() != EOF);

//将输入变成输出
	int c;
	while((c = getchar()) != EOF)
	{
		putchar(c);
	}
}

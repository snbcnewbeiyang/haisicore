# include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void main(void)
{
	float fahr,celsius;

	while(fahr <= UPPER)
	{
		celsius = 5.0 * (fahr - 32) / 9.0;
//		printf("%3.0f,%6.1f\n",fahr,celsius);
		fahr += STEP;
	}
	
	for(fahr = 0;fahr <= UPPER;fahr += STEP)
	{
		//printf("%3.0f,%6.2f\n",fahr,5.0 * (fahr - 32) /9.0 );
	}

	printf("%d\n",getchar() != EOF);

	int c;
	while((c = getchar()) != EOF)
	{
		putchar(c);
	}
}

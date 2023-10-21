/*
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *ptr1 = (int *)malloc(sizeof(int));
	int *ptr2 = (int *)malloc(sizeof(int) * 7);
	int i;

	*ptr1 = 20;
	for (i = 0; i < 7; i++)
		ptr2[i] = i + 1;

	printf("%d \n", *ptr1);
	for (i = 0; i < 7; i++)
		printf("%d ", ptr2[i]);

	free(ptr1);
	free(ptr2);
	return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
	short a = 5;
	short *ap;
	ap = (short*)malloc(2);
	printf("%u\n", ap);
	*ap = 10;
	printf("%d\n", a + *ap);
	free(ap);
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char *ap;
	ap = (char *)malloc(4);
	strcpy(ap, "ABC");
	printf("%u\n", ap);		puts(ap);
	free(ap);
	ap = (char *)malloc(4);
	strcpy(ap, "DEF");
	printf("%u\n", ap);		puts(ap);
	free(ap);
}
*/



/*
#include<stdio.h>
#include<stdlib.h>					// 동적메모리 4페이지 1번
void main()
{
	int n;
	printf("몇개의 수를 입력할까요 :");
	scanf("%d",&n);
	int *ap;
	ap = (int *)malloc(sizeof(int)*n);
	int i;
	int k;

	for (i = 0; i <n; i++)
	{
		printf("%d번째 값 : ",i+1);
		scanf("%d", &k);
		ap[i] = k;
		
	}
	printf("입력한 값은 => ");
	for (i = 0; i < n; i++)
	{
		printf("%3d", ap[i]);
	}
}
*/


/*
#include<stdio.h>
#include<time.h>								// 2번
#include<stdlib.h>
void main()
{
	int *ap;
	int n;
	int i;
	int sum = 0;
	srand(time(NULL));

	printf("몇 개의 난수를 발생 할까요 ? ");
	scanf("%d", &n);

	ap = (int *)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++)
	{
		ap[i] = rand() % 100 + 1;
		sum += ap[i];
	}
	for (i = 0; i < n; i++)
		printf("%3d", ap[i]);
	printf("\n합 = %d", sum);
	

}
*/


/*
#include<stdio.h>								// 3번
#include<stdlib.h>
void main()
{
	int n, i, k;
	int sum = 0;
	printf("몇 개의 수를 입력 하시겠습니까 ? ");
	scanf("%d", &n);
	int *ap;
	ap = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		printf("정수를 입력하세요 : ");
		scanf("%d", &k);
		ap[i] = k;
		sum += ap[i];
	}
	float n1 = n;

	printf("합=%d \n", sum);
	printf("평균=%.1f \n", sum / n1);

	int max = ap[0];
	int min = ap[0];

	for (i = 0; i < n; i++)
	{
		if (ap[i] > max) max = ap[i];
		if (min > ap[i]) min = ap[i];
	}

	printf("최대값=%d\n", max);
	printf("최소값=%d\n", min);

}
*/


/*
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>		// 4번
#include"mystring.h"
void main()
{
	char c;
	printf("문자를 입력하세요 : ");
	char *ap;
	ap = (char *)malloc(sizeof(char));
	*ap = NULL;
	char *bp;
	

	while (1)
	{
		c=_getche();

		if (c == 13) break;
		bp = (char *)malloc(strlen(ap) + 1);
		strcpy(bp, ap);
		ap = (char *)malloc(strlen(bp) + 2);
		strcpy(ap, bp);
		ap[strlen(bp)] = c; 
		ap[strlen(bp) + 1] = NULL;
		
	}
	printf("\n\n");
	puts(ap);
	

}
*/





/*
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>						// 5번
#include"mystring.h"
void main()
{
	char c;
	printf("문자를 입력하세요 : ");
	char *ap;
	ap = (char *)malloc(sizeof(char));
	*ap = NULL;
	char *bp;
	int i;


	while (1)
	{
		c = _getche();

		if (c == 13) break;
		bp = (char *)malloc(strlen(ap) + 1);
		strcpy(bp, ap);
		ap = (char *)malloc(strlen(bp) + 2);
		strcpy(ap, bp);
		ap[strlen(bp)] = c;
		ap[strlen(bp) + 1] = NULL;

	}
	printf("\n\n");
	i = strlen(ap);
	while ( 0<=i)
	{
		printf("%c ->", ap[i]);
		i--;
	}
}
*/






/*
#include<stdio.h>
#include<string.h>									// 6번
#include<stdlib.h>
#include"mystring.h"
void main()
{
	char name[100];
	int i;
	char *ap;
	char **bp;


	for (i = 0; i < 5; i++)
	{
		printf("과일이름 :");
		gets_s(name);
		ap = (char *)malloc(sizeof(char)*strlen(name));
		strcpy(ap, name);
		ap[strlen(name)] = NULL;
		*bp = ap;

	}
}

*/







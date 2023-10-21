/*

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char *ap, **bp;
	ap = (char *)malloc(4);
	strcpy(ap, "ABC"); puts(ap); printf("%c\n", ap[1]);
	bp = &ap;
	puts(*bp);	printf("%c", bp[0][1]);
	free(ap);
}



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char **ap;
	ap = (char **)malloc(sizeof(char *) * 2);
	ap[0] = (char *)malloc(3);
	ap[1] = (char *)malloc(3);
	strcpy(ap[0], "AB");
	strcpy(ap[1], "CD");
	puts(ap[0]);	puts(ap[1]);
	free(ap[0]);	free(ap[1]);
	free(ap);
}



#include<stdio.h>
void main()
{
	const char *M[] = {"ABC","DEF"};
	puts(M[0]);
	puts(M[1]);
	putchar(M[1][1]);
}


#include<stdio.h>
void main()
{
	char const *M[] = { "ABC","DEF" };
	const char **ap;
	ap = M;
	puts(*ap);
	puts(ap[1]);
	putchar(ap[1][1]);
}



#include<stdio.h>
void main()
{
	const char *M[2] = { "AB","CD" }, *N[2] = { "EF","GH" };
	const char **ap[] = { M,N };
	puts(ap[0][0]);
	puts(ap[0][1]);
	puts(ap[1][0]);
	puts(ap[1][1]);
	putchar(ap[1][1][1]);
}


#include<stdio.h>
void main()
{
	const char *M[2][2] = { {"AB","CD"},{"EF","GH"} };
	puts(M[0][0]);
	puts(M[0][1]);
	puts(M[1][0]);
	printf("%c",M[1][1][1]);
}



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char m[] = "ABC";
	char *ap = (char *)malloc(sizeof(m));
	char *aap;
	strcpy(ap, m); aap = m; puts(ap);	puts(aap);	printf("%c", *ap++);
	printf("%c", ap[0]); ap--; printf("%c", *aap); free(ap);
}


#include<stdio.h>
void main()
{
	int M;
	int *ap;
	int **bp;
	int ***cp;
	ap = &M;
	bp = &ap;
	cp = &bp;
	*ap = 1;
	**bp += 2;
	***cp += 3;
	printf("%d=n", M);
}



#include<stdio.h>
void main()
{
	char M[] = "YYYY";
	char *ap, **bp;
	ap = M;	bp = &ap;	*ap = 'A';	ap++;	**bp = 'B';
	bp[0][3] = 'C';
	ap[1] = 'D';
	puts(M);
}

*/

/*
#include<stdio.h>
void SwaplntPtr(int **dp1, int **dp2)
{
	int *c;
	c = *dp1;
	*dp1 = *dp2;
	*dp2 = c;

}
int main(void)
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	SwaplntPtr(&ptr1, &ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	return 0;
}
*/

/*
#include<stdio.h>
void main()
{
	int n = 20;
	int *np = &n;
	int **npp =&np;

	printf("%d %d %d\n", n, *np, **npp);
}

*/




/*
#include<stdio.h>								// 5p 12번 질문
void main()
{
	char carr3[2][2][3]=
	{'A','B','C','D','E','F','G','H','I','J','K','L'};

	printf("%x	%x	%x	%x\n", carr3, carr3[0], carr3[0][0], carr3[0][0][0]);
	printf("%x	%x	%x	%x\n", carr3+1, carr3[0]+1, carr3[0][0]+1, carr3[0][0][0]+1);
	printf("%x	%x	%x	%x\n", carr3+1, *carr3+1, **carr3+1, ***carr3+1);

	
}
*/



/*
#include<stdio.h>
void main()
{
	char M[2][3] = { "AB","CD" };
	char(*ap)[3];
	ap = M;
	puts(ap[0]);
	puts(ap[1]);
	putchar(ap[1][1]);
}


#include<stdio.h>
void main()
{
	char M[2][2][3] = { {"AB","CD"},{"EF","GH"} };
	char(*ap)[2][3];
	ap = M;
	puts(ap[0][0]);
	puts(ap[1][0]);
	putchar(ap[1][1][1]);
}
*/




/*
#include<Stdio.h>								// 15번 질문
void main()
{
	char M[2][3] = { "AB","CD" };
	char N[2][3] = { "EF","GH" };
	char(*ap[2])[3];
	ap[0] = M;	ap[1] = N;
	puts(ap[0][0]);
	puts(ap[0][1]);
	puts(ap[1][0]);
	putchar(ap[0][0][0]);	putchar(ap[0][0][1]);
	putchar(ap[1][0][0]);	putchar(ap[1][0][1]);
}
*/


/*
#include<stdio.h>
void main()
{
	char carr[4] = { 'A','B','C','D' };
	char(*ap)[2] = (char(*)[2])carr;

	printf("%c %c %c %c\n", carr[0], carr[1], carr[2], carr[3]);
	printf("%c %c %c %c\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
}
*/


/*
#include<stdio.h>
void main()
{
	int iarr[4] = { 1,2,3,4 };
	int(*ap)[2] = (int(*)[2]) iarr;

	printf("%d %d %d %d\n", iarr[0], iarr[1], iarr[2], iarr[3]);
	printf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
}


#include<stdio.h>
void main()
{
	char carr2[2][2] = { 'A','B','C','D' };
	char(*ap)[2] = (char(*)[2]) carr2;

	printf("%c %c %c %c\n", carr2[0][0], carr2[0][1], carr2[1][0], carr2[1][1]);
	printf("%c %c %c %c\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
}


#include<stdio.h>
void main()
{
	int iarr2[2][2] = { 1,2,3,4 };
	int(*ap)[2] = iarr2;

	printf("%d %d %d %d\n", iarr2[0][0], iarr2[0][1], iarr2[1][0], iarr2[1][1]);
	printf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
}
*/




/*
#include<stdio.h>								// 19번 질문
void main()
{
	char carr[12] = { 'A','B','C','D','E','F','G','H','I','J','K','L' };

	char(*ap1)[4] = (char(*)[4])carr;
	char(*ap2)[3] = (char(*)[3])carr;
	char(*ap3)[2][3] = (char(*)[2][3])carr;

	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",ap1[0][0],ap1[0][1],ap1[0][2],ap1[0][3],
		ap1[1][0], ap1[1][1], ap1[1][2], ap1[1][3], ap1[2][0], ap1[2][1], ap1[2][2], ap1[2][3]);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",ap2[0][0],ap2[0][1],ap2[0][2],
		ap2[1][0],ap2[1][1],ap2[1][2],
		ap2[2][0],ap2[2][1],ap2[2][2],
		ap2[3][0], ap2[3][1], ap2[3][2]);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",
		ap3[0][0][0],ap3[0][0][1],ap3[0][0][2],ap3[0][1][0],
		ap3[0][1][1],ap3[0][1][2],ap3[1][0][0],ap3[1][0][1],
		ap3[1][0][2], ap3[1][1][0], ap3[1][1][1], ap3[1][1][2]);

}
*/




/*
#include<stdio.h>							// 22번
void main()
{
	char carr2[2][2] = { 'A','B','C','D' };
	char *ap = (char *)carr2;

	printf("%c %c %c %c\n",
		carr2[0][0], carr2[0][1], carr2[1][0], carr2[1][1]);
	printf("%c %c %c %c\n",
		ap[0], ap[1], ap[2], ap[3]);
}
*/



/*
#include<stdio.h>							// 23번
void main()
{
	int iarr2[2][2] = { 10,20,30,40 };
	int *ap = (int *)iarr2;

	printf("%d %d %d %d\n",
		iarr2[0][0], iarr2[0][1], iarr2[1][0], iarr2[1][1]);
	printf("%d %d %d %d\n",
		ap[0], ap[1],ap[2], ap[3]);
}
*/





/*
#include<stdio.h>								// 24번
void main()
{
	char c = 'A';

	char(*ap1)[2] = (char(*)[2])&c;
	char(*ap2)[4] = (char(*)[4])&c;
	char(*ap3)[3][3] = (char(*)[3][3])&c;

	printf("%c %c %c\n", **ap1, **ap2, ***ap3);
	printf("%c %c %c\n", ap1[0][0], ap2[0][0], ap3[0][0][0]);

	printf("%x %x %x %x\n", ap1, ap1 + 1, ap1[0], ap1[1]);
	printf("%x %x %x %x\n", ap2, ap2 + 1, ap2[0], ap2[1]);
	printf("%x %x %x %x\n", ap3, ap3 + 1, ap3[0], ap3[1]);

	printf("%x %x %x %x\n", ap3[0], ap3[0] + 1, ap3[0][0], ap3[0][1]);
}
*/



/*
#include<stdio.h>
void KK(char ap[])
{
	putchar(ap[0]);
	putchar(ap[1]);
}
void main()
{
	char M[] = "ABC";
	KK(M);
}


#include<stdio.h>
void KK(char ap[][3])
{
	puts(ap[0]);
	puts(ap[1]);
}
void main()
{
	char M[2][3] = { "AB","CD" };
	KK(M);
}


#include<stdio.h>
void KK(char ap[][2][3])
{
	puts(ap[0][0]);
	puts(ap[1][1]);
}
void main()
{
	char M[2][2][3] = { {"AB","CD"},{"EF","GH"} };
	KK(M);
}
*/










/*
#include<stdio.h>						// 11페이지 1번
void main()
{
	int arr[5] = { 10,20,30,40,50 };
	int *ap;
	ap = arr;

	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("%d %d %d %d %d\n", ap[0], ap[1], ap[2], ap[3], ap[4]);
}
*/




/*
#include<stdio.h>								// 11페이지 2번
#include<stdlib.h>
void main()
{
	int arr[2][2] = { {10,20},{100,200} };
	int(*ap)[2] = arr;
	

	printf("%d %d %d %d\n", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
	printf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
}
*/




/*
#include<stdio.h>							// 3번
void main()
{
	int arr[6] = { 10,20,100,200,1000,2000 };
	int(*ap)[2] = (int(*)[2])arr;

	printf("%d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	printf("%d %d %d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1], ap[2][0], ap[2][1]);
}
*/

/*
#include<stdio.h>
void input_string(char(*sp)[20])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		gets_s(sp[i]);
		
	}
}
void output_string(char(*sp)[20])
{
	int i;
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		puts(*sp);
		sp++;
	}
}
void main()
{
	char str[5][20];
	
	input_string(str);
	output_string(str);
}
*/


/*
#include<stdio.h>
#include<string.h>
void Swap(char *a, char *b)
{
	

	char c[30];
	strcpy(c, a);
	strcpy(a, b);
	strcpy(b, c);
	
}
void main()
{
	char a[30];
	char b[30];

	printf("첫번째 문자열을 입력하세요 : ");
	gets_s(a);
	printf("두번째 문자열을 입력하세요 : ");
	gets_s(b);
	Swap(a, b);
	printf("첫번째 문자열 : ");
	puts(a);
	printf("두번째 문자열 : ");
	puts(b);

}
*/


/*
#include<stdio.h>
#include<string.h>
void Swap(char **ap, char **bp)
{
	char *cp;
	cp = *ap;
	*ap = *bp;
	*bp = cp;
	

	
}
void main()
{
	char a[30];
	char b[30];

	printf("첫번째 문자열을 입력하세요 : ");
	gets_s(a);
	printf("두번째 문자열을 입력하세요 : ");
	gets_s(b);
	char *ap = a;
	char *bp = b;
	Swap(&ap, &bp);
	printf("첫번째 문자열 : ");
	puts(ap);
	printf("두번째 문자열 : ");
	puts(bp);

}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void apple(char **ap, int n)
{
	char name[100];
	
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d번째 과일명을 입력하시오 : ",i+1);
		gets_s(name);
		ap[i] = (char *)malloc(strlen(name) + 1);
		strcpy(ap[i], name);
	}


}
void main()
{
	int n;
	int i;
	printf("당신이 알고 있는 과일의 가지 수는 ? ");
	scanf("%d", &n);
	getchar();
	char **ap;
	ap = (char **)malloc(sizeof(char *)*n);
	apple(ap,n);
	
	
	printf("당신이 알고 있는 과일의 종류는 \n");

	for (i = 0; i < n; i++)
		printf("%s  ",ap[i]);

}
*/





/*
#include<stdio.h>									// 7번
#include<string.h>
#include<stdlib.h>
void chair(char **ap, char **bp, int n)
{
	char name[100];
	char ename[100];
	int i;
	getchar();
	for (i = 0; i < n; i++)
	{
		printf("%d번째 단어 : \n", i + 1);
		gets_s(name);
		ap[i] = (char *)malloc(strlen(name) + 1);
		strcpy(ap[i], name);

		gets_s(ename);
		bp[i] = (char *)malloc(strlen(ename) + 1);
		strcpy(bp[i], ename);
	}
	printf("== 저장이 끝났습니다.\n\n");
}
int desk(char **ap, char **bp, int n)
{
	int i;
	int sum = 0;
	char name[100];
	for (i = 0; i < n; i++)
	{
		printf("%s : \n", ap[i]);
		gets_s(name);
		if (strcmp(name, bp[i]) == 0) sum += 1;
	}
	return(sum);


}
void main()
{
	int n;
	printf("몇 개의 단어를 입력하여 저장할까요 ? ");
	scanf("%d", &n);

	char **ap;
	char **bp;
	ap = (char **)malloc(sizeof(char *)*n);
	bp = (char **)malloc(sizeof(char *)*n);
	chair(ap, bp, n);
	printf("%d개의 정답을 맞추었습니다~~~~ ",desk(ap, bp, n));

}
*/


/*
#include<stdio.h>						// 8번
#include<string.h>
#include<stdlib.h>
void input(char ***ap, int n)
{
	int i;
	char name1[100];
	char name2[100];
	ap[0] = (char **)malloc(sizeof(char *)*n);
	ap[1] = (char **)malloc(sizeof(char *)*n);
	
	
	for (i = 0; i < n; i++)
	{
		printf("%d번째 단어 : \n", i + 1);
		scanf("%s%s", name1, name2);
		ap[0][i] = (char *)malloc(strlen(name1) + 1);
		strcpy(ap[0][i], name1);
		ap[1][i] = (char *)malloc(strlen(name2) + 1);
		strcpy(ap[1][i], name2);

	}
	printf("== 저장완료\n\n");
}
void correct(char ***ap,int n)
{
	int ch = 3;
	int sum = 0;
	int i;
	char name[100];
	getchar();
	for (i = 0; i < n; i++)
	{
		printf("%d번째 단어 : %s   ",i+1, ap[0][i]);
		gets_s(name);
		if (strcmp(ap[1][i], name) == 0) sum += 1;
		else {printf("틀렸습니다 ㅠㅠ %d번 더 기회가 있습니다\n", --ch); 
			while (ch != 0)
			{
				printf("%d번째 단어 : %s   ", i + 1, ap[0][i]);
				gets_s(name);
				if (strcmp(ap[1][i], name) == 0) { sum += 1; break; ch--; }
				else printf("틀렸습니다 ㅠㅠ %d번 더 기회가 있습니다\n", --ch);

			}
		}
	}
	printf("%d개의 정답을 맞추었습니다~~", sum);
}
void main()
{
	int n;
	printf("몇 개의 단어를 입력하여 저장 할까요 ? ");
	scanf("%d", &n);

	char ***ap;
	ap = (char ***)malloc(sizeof(char **)*2);

	input(ap,n);
	correct(ap, n);

}
*/






/*
#include<stdio.h>						// 9번
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void input(char **ap,int n)
{
	int i;
	char name[100];
	getchar();
	for (i = 0; i < n; i++)
	{
		printf("%d번째 단어 : \n", i + 1);

		gets_s(name);
		ap[i] = (char *)malloc(strlen(name) + 1);
		strcpy(ap[i], name);
	}
	printf("== 저장완료\n");
	
}
void correct(char **ap,int n)
{
	srand(time(NULL));
	int r, i, k, a, u;
	char star[100];
	char bp[100];
	char cp[100];
	for (;;)
	{
	   r = rand() % n + 0;
	   k = strlen(ap[r]);
	   i = k * 0.7;
	   strcpy(star, ap[r]);
	   for (a = 0; a < i; a++)
	   {
		   u = rand() % k + 0;
		   if (star[u] == '*') {
			   while (1) {
				   u = rand() % k + 0;
				   if (star[u] == '*') continue;
				   else break;
			   }
		   }
		   star[u] = '*';
	   }
	   strcpy(bp, star);
	   puts(star);
	   gets_s(cp);
	   if (strcmp(ap[r], cp) == 0) printf("정답~~~!\n");
	   else printf("틀렸습니다~\n");
	}

}
void main()
{
	int n;
	char **ap;
	printf("몇개의 단어 ? ");
	scanf("%d", &n);
	ap = (char **)malloc(sizeof(char *)*n);
	input(ap,n);
	correct(ap,n);
	
}
*/



/*
#include<stdio.h>
#include<stdlib.h>// 10번
#include<string.h>
void output(char **ap);
void color(char **ap)
{
	int i;
	char name[100];
	printf("함수에서 기억시킬 데이터 5개 : ");
	for (i = 0; i < 5; i++)															// 
	{
		gets_s(name);
		ap[i] = (char *)malloc(strlen(name) + 1);
		strcpy(ap[i], name);
	}
	output(ap);

}
void output(char **ap)
{
	int i;
	printf("몇 번째 색을 가져올까요? :");
	scanf("%d", &i);
	--i;
	printf("=>%d번째 기억되어 있는 색은 %s입니다", i, ap[i]);

}

void main()
{
	int i;
	char **ap;
	ap = (char **)malloc(sizeof(char) * 5);
	color(ap);

}
*/




/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void output(char **ap, int n);
void input()
{
	int n;
	printf("몇 개의 배열을 입력하시겠습니까 ?");
	scanf("%d", &n);
	char **ap;
	ap = (char **)malloc(sizeof(char)*n);
	int i;
	char name[100];
	getchar();
	for (i = 0; i < n; i++)
	{
		printf("%d번째 배열 : ", i + 1);
		gets_s(name);
		ap[i] = (char *)malloc(strlen(name) + 1);
		strcpy(ap[i], name);
	}
	printf("==저장완료 \n");
	output(ap, n);

}
void output(char **ap,int n)
{
	int i;
	printf("저장된 문자열은 모두\n\n");
	for (i = 0; i < n; i++)
	{
		puts(ap[i]);
	}
}
void main()
{
	printf("배열을 모두 입력하세요 \n");
	input();
}
*/


/*
#include<stdio.h>
#include<stdlib.h>
void set_max_ptr(int **pmax, int m_len);
int main()
{
	int m[6] = { 5,6,1,3,7,9 };
	int *pmax = m;
	int m_len = sizeof(m) / sizeof(m[0]);
	set_max_ptr(&pmax, m_len);
	return 0;
}
void set_max_ptr(int **pmax, int m_len)
{
	int i;
	int max = **pmax;
	for (i = 0; i < m_len; i++)
	{
		if (max < (*pmax)[i]) max = (*pmax)[i];
	}
	printf("가장 큰 값은 : %d", max);


}
*/

/*
#include<stdio.h>
#include<string.h>
void sort_strings(char *ap, int size);
void main()
{
	char ap[100];
	printf("문자열을 입력하시오 : ");
	gets_s(ap);
	int i=strlen(ap);
	sort_strings(ap,i);
	puts(ap);

}
void sort_strings(char *ap, int size)
{
	int i, c, k;
	for (k = 0; k < size - 1; k++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (ap[i] > ap[i + 1]) {
				c = ap[i];
				ap[i] = ap[i + 1];
				ap[i + 1] = c;
			}
		}
	}

}
*/

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void array_equal(char(*ap)[10], char(*bp)[10]);
void main()
{
		int i, k;
		char name1[5][10] = { "apple","orange","grape","banana","mekon" };
		char name2[5][10] = { "apple","orange","grape","banana","mekon" };


		array_equal(name1,name2);
}

void array_equal(char (*ap)[10], char (*bp)[10])  
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (strcmp(*ap, *bp )!= 0)  break;
		ap++; bp++;
	}
	if (i==4) printf("배열 1과 배열 2는 같습니다");
	else printf("배열 1과 배열 2는 다릅니다");
}
*/


/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void array_equal(char name1[][10], char name2[][10]);
//void array_equal(char(*ap)[10], char(*bp)[10]);
void main()
{
	int i, k;
	char name1[5][10] = { "apple","orange","grape","blueberry","mekon" };
	char name2[5][10] = { "apple","orange","grape","blueberry","mekon" };


	array_equal(name1, name2);
}

//void array_equal(char (*ap)[10], char (*bp)[10])
void array_equal(char name1[][10], char name2[][10])
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (strcmp(name1[i], name2[i]) != 0) break;
		
	}
	if (i==4) printf("배열 1과 배열 2는 같습니다");
	else printf("배열 1과 배열 2는 다릅니다");
}
*/


/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void array_equal(char(*ap)[10], char(*bp)[10]);
void main()
{
	char **ap, **bp;
	char name[100];
	ap = (char **)malloc(sizeof(char *) * 5);
	bp = (char **)malloc(sizeof(char *) * 5);
	int i; 
	for (i = 0; i < 5; i++)
	{
		gets_s(name);
		ap[i] = (char *)malloc(strlen(name) + 1);
		strcpy(ap[i], name);
	}
	for (i = 0; i < 5; i++)
	{
		gets_s(name);
		bp[i] = (char *)malloc(strlen(name) + 1);
		strcpy(bp[i], name);
		
	}
	array_equal(ap, bp);
}

void array_equal(char(*ap), char(*bp))
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (strcmp(*ap, *bp) != 0)  break;
		ap++; bp++;
	}
	if (i == 4) printf("배열 1과 배열 2는 같습니다");
	else printf("배열 1과 배열 2는 다릅니다");
}

*/




/*
#include<stdio.h>		// 15번
#include<string.h>
#include<stdlib.h>
void array_copy(char **ap,char **bp,int n)
{
	
	int i;
	for (i = 0; i < n; i++)
	{
		bp[i] = (char *)malloc(strlen(ap[i]));
		strcpy(bp[i], ap[i]);
	}
	
}
void main()
{
	char **ap;
	int n, i;
	char name[100];
	printf("행의 갯수 : ");
	scanf("%d", &n);
	ap = (char **)malloc(sizeof(char *)*n);
	char **bp;
	bp = (char **)malloc(sizeof(char *)*n);
	getchar();
	for (i = 0; i < n; i++)
	{
		printf("%d행에 들어갈 문자열 입력 : ",i);
		gets_s(name);
		ap[i] = (char *)malloc(strlen(name) + 1);
		strcpy(ap[i], name);
	}
	printf("복사된 2차원 배열\n");
	array_copy(ap,bp,n);

	for (i = 0; i < n; i++)
	{
		puts(bp[i]);
	}
}
*/




/*
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main() 
{
	char ch;

	int i = 0, sum = 0;
	int cnt = 0;
	int cline = 0;
	while (1)
	{
		ch = _getche();
		if (ch == '.') {
			sum += 1;
			cline += 1;
			break;
		}
		if (ch == 32) sum += 1;
		else if (ch == 13) {
			printf("\n");
			cline += 1;
			sum += 1;
			
		}
		 else cnt += 1;

	}
	printf("글자수 : ");
	printf("%d", cnt);
	printf("\n단어수 : ");
	printf("%d", sum);
	printf("\n줄수 :");
	printf("%d", cline);

}
*/





/*
#include<stdio.h>
void main()
{
	int data[][2] = { {10,20},{30,40},{50,60},{70,80},{90,100} };
	int(*ptr)[2] = data;
	int i, k;

	for(i=0;i<5;i++)
	{
		printf("%3d ", *ptr[i]);
		
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%3d ",ptr[i][1]);
	}

	printf("\n");

	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 2; k++)
		{
			printf("%3d ", ptr[i][k]);
		}
	}
}

*/

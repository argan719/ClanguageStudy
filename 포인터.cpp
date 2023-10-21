/*
#include<stdio.h>
void main()
{
	short a;
	short b;
	short c;

	a = 10;
	*&b = *&a + 2;
	*&a += 4;
	c = a + b;  
	printf("%d\n", c);
}


#include<stdio.h>
void main()
{
	long M[3] = { 10,20,30 };
	//printf("%d %d %d", &M[0], &M[1], &M[2]);
	long k;
	k = *M + M[1] + *(M + 1);
	k += *&M[2] + *M + 1;
	printf("%d\n", k);
}


#include<stdio.h>
void main()
{
	char M[] = { 'A','B','C','D' };
	int N = sizeof(M);
	int a;
	*&M[0] += 32;	*(M + 1) += 1;	++*(M + 2);	*(M + 3) += 2;
	for (a = 0;a < N;a++)
		putchar(*(M + a));
}



#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short a;
	a = M[0][0] + M[0][1] + M[1][0] + M[1][1];
	printf("%d\n", a);
	a += (*&M[1][0] + *M[0] + *(M[1]+1));
	printf("%d\n", a); 
	a -= **M;
	printf("%d\n", a);
	a += *(*(M + 1) + 1);
	printf("%d\n", a);
}


#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short a, sum = 0;
	*M[0] = 15;	*(M[0] + 1) = 25;
	*M[1] = 35;	M[0][3] = 45;
	**M = 17;	*(*(M + 1) + 1) = 47;
	*(*M + 1) = 27;	**(M + 1) = 37;
	M[1][-1] += 2;
	for (a = 0;a < 4;a++)
		sum += M[0][a];
	printf("%d\n", sum);
}


#include<stdio.h>
void main()
{
	short M[2][2][2] = { {{10,20},{30,40}},{{50,60},{70,80}} };
	int a, b, c;
	short cnt = 0;

	++*M[0][0];
	*M[0][1] += 2;
	*M[1][0] += 3;
	*M[1][1] += 4;
	++*(M[0][0] + 1);
	*(M[0][1] + 1) += 2;
	*(M[1][0] + 1) += 3;
	*(*(M[0] + 0)) += 1;
	*(*(M[0] + 0) + 1) = *(*M[0] + 1) + *(**M + 1) + 2;
	*(*(M[0] + 1)) = *(*(*M + 1)) + 3;

	for (a = 0;a < 2;a++)
	{
		for (b = 0;b < 2;b++)
		{
			for (c = 0;c < 2;c++)
				printf("%3d",M[a][b][c]);
		}
	}
}



#include<stdio.h>
void main()
{
	short M[] = { 10,20,30,40 };
	short *ap;
	short c;
	ap = M;
	c = *ap++;	c += *(ap + 1);
	c += *++ap;	c += ap[1]--;
	c += ap[1];
	printf("%d\n", c);
}



#include<stdio.h>
	#include<string.h>
	void main()
{	
		char M[] = { 'P','A','E','\0' };
		char *ap;
		int a = 0;
		ap = M + strlen(M) - 1;
		printf("%c\n", *ap--);	*--ap = 'T';	printf("%s\n", ap);
		printf("%c\n", *++ap);	printf("%c\n", ap[a++]);
		printf("%c\n", ap[--a]);

}


#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short *ap;
	short c;
	ap = M[0];	c = *ap;	ap++;	c += *ap;
	ap += 2;	c += *ap;	c += *ap--;	c += *--ap;
	printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
	c += *ap;	c += ap[-1];	c += ++*ap;	ap++;
	c += ap[1];
	printf("%d\n", ++*ap);
	printf("%d\n", c);
}


#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short *ap;
	short c;
	ap = M[0];	c = *ap;
	ap++;	c += *ap;
	ap+=2;	c += *ap;
	c += *ap;
	c += *--ap;
	printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
	c += *(ap - 2);
	c += ap[-1];
	c += ++*ap;	ap++;	c -= ap[-1];
	printf("%d\n", ++*ap);
	printf("%d\n", c);
}


#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short *ap, *bp;
	short a, sum = 0;
	ap = M[0];
	bp = M[0] + sizeof(M) / sizeof(M[0][0]) - 1;
	for (a = 0;a < sizeof(M) / sizeof(M[0][0]);a++)
		sum += *ap++ + *bp--;

	*--ap = 45; *++bp = 15; a = 0; bp[++a]++; ++ap[-a--]; ap = M[0];
	for (;a < sizeof(M) / sizeof(M[0][0]);a++)
		sum -= ap[a];

	ap = M[1] - sizeof(M[0]) / sizeof(M[0][0]);
	printf("%d\n", sum);
	printf("%d %d %d %d \n", M[0][0], M[0][1], M[1][0], M[1][1]);
}


#include<stdio.h>
#include<string.h>
void main()
{
	char M[] = "ABC";
	const char *ap = "ABC";
	puts(M);	puts(ap);
	ap = "DEF";
	puts(ap);
	printf("%c", ap[1]);
	strcpy_s(M, "YZ");
	puts(M);

}



#include<stdio.h>
void main()
{
	char M[4] = "ABC";
	printf("%c%c%c\n", M[0], M[1], M[2]);
	*M = 'X';
	*(M + 1) = 'Y';
	*(M + 2) = 'Z';
	puts(M);
}



#include<stdio.h>
#include<string.h>
void main()
{
	char M[2][5] = { "ABC","XYZ" };
	printf("%c%c%c\n", M[0][0], M[0][1], M[0][2]);
	puts(&M[1][0]);
	*(M[0] + 1) = 'F';	*(M[1] + 1) = 'E';
	puts(M[0]);	puts(*M);
	strcpy_s(M[1], "GHI");
	puts(*(M + 1));
	printf("%c\n", **M);
}




#include<stdio.h>
void main()
{
	char M[] = "ABC";
	char *ap = M;
	*ap++ += 1;
	*++ap += 3;
	ap -= 2;
	ap[1] += 2;
	puts(M);
}



#include<stdio.h>
void main()
{
	char M[2][7] = { "KOREA","SEOUL" };
	char *ap = M[0];
	puts(M[0]);
	puts(ap);
	ap += sizeof(M[0]);
	puts(ap++);
	printf("%c\n", ap[2]);
	printf("%c\n", *ap--);
	puts(ap);
	printf("%c\n", *++ap);
}




#include<stdio.h>
void main()
{
	const char *ap = "KOREA";
	char M[5] = { 0 };
	int a = 0;
	M[0] = ap[a++];
	M[1] = *++ap;
	M[2] = ap[++a];
	M[3] = ap[a - 1];
	puts(M);
}


#include<stdio.h>
void main()
{
	char str[] = "computer";
	char *sp = str;
	int i;
	puts(str);
	for (i = 1;i <= 7;i++)
	{
		sp++;
		puts(sp);
	}

}


#include<stdio.h>
void main()
{
	int M[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *sp = M;
	int i;

	for (i = 1;i <= 5;i++)
	{
		sp++;
		printf("%3d",*sp);
		sp++;

	}
}


//Call by value
#include<stdio.h>
int M1(int a)
{
	a -= 10;
	return(a);

}
int M2(int b)
{
	b += 50;
	return(b);
}
int main()
{
	int a=100, b = 100;
	
	printf("%3d ", M1(a));
	printf("%3d", M2(b));
}


// Call by reference 
#include<stdio.h>
void ref(int *ap, int *bp)
{
	*ap -= 10;
	*bp += 50;
}
int main()
{
	int a = 100, b = 100;
	ref(&a, &b);
	printf("%3d %3d", a, b);
}



#include<stdio.h>
void SaChick(double a, double b, double *ap)
{
	*ap = a + b;
	ap++;
	*ap = a - b;
	ap++;
	*ap = a * b;
	ap++;
	*ap = a / b;
}
void main()
{
	double a = 5, b = 2;
	double M[4];
	SaChick(a, b, M);
	printf("합= %.1f  차= %.1f\n", M[0], M[1]);
	printf("곱= %.1f 제= %.1f\n", M[2], M[3]);
}



#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a;
	long b;
	double c;
	a = atoi("12"); b = atoi("123400"); c = atof("12.5");
	printf("%f\n", a + b + c);
}



#include<stdio.h>
#include<ctype.h>
void main()
{
	printf("%d\n", islower('a'));	printf("%d\n", isdigit('9'));
	printf("%d\n", isupper('A'));	printf("%d\n", !islower('a'));
	printf("%d\n", isdigit('a'));
}


#include<stdio.h>
#include<string.h>
void main()
{
	char M[11];
	strcpy_s(M, "ABC");
	puts(M);
	strncpy_s(M, "DEFG", 2);
	puts(M);
	strcat_s(M, "HI");
	puts(M);
	strncat_s(M, "JKLM", 2);
	puts(M);
	printf("%d\n", strlen(M));
	printf("%d\n", strcmp("abc", "ABC"));
	printf("%d\n", _strcmpi("abc", "ABC"));
	printf("%d\n", strncmp("ABCD", "ABCDE", 2));
	printf("%d\n", _strnicmp("abcd", "ABDE", 2));
	strcpy_s(M, "ABCDCE");	puts(M);
	printf("%d\n", strchr(M, 'C') - M);
}


#include<stdio.h>
void MyUpper(char *st)
{
	
	while (*st != NULL)
	{
		if (65 <= *st && *st<= 90) *st += 32;
		st++;
	}
	
}
int main()
{
	char st[100];
	gets_s(st);
	MyUpper(st);
	puts(st);
}



#include<stdio.h>
#include<string.h>
int Mystrlen(char *st)
{
	int M = strlen(st);
	return(M);
}
int main()
{
	char st[100];
	gets_s(st);
	printf("%d",Mystrlen(st));
}


#include<stdio.h>
#include<string.h>
void Mystrreverse(char *st)
{
	int c;
	int i, k;
	int len = strlen(st);
	int len1 = strlen(st);
	
	for (i = 0;i < len1 / 2;i++, len--)
	{
		c = st[i];
		st[i] = st[len-1];
		st[len-1] = c;
	
	}

		printf("%s ", st);

}
int main()
{
	char st[100];
	gets_s(st);
	Mystrreverse(st);
}


#include<stdio.h>
#include<string.h>
void Mynospace(char *st)
{
	int i;
	for (i = 0;i <= strlen(st);i++)
	{
		if (st[i] == 32) {
			while (st[i] != NULL)
			{
				st[i] = st[i + 1];
				i++;
			}

		}
	}
	puts(st);
}
void main()
{
	char st[100];
	gets_s(st);
	Mynospace(st);
}



#include<stdio.h>
#include<string.h>
void myStrcat(char *ap, char *bp)
{
	while (*ap != NULL)
	{
		ap++;
	}
	int i;
	for(i=0;;i++)
	{
		ap[i] = bp[i];
		if (bp[i] == NULL) break;

	}

}
void main()
{
	char M[6] = "AB";
	char M2[6] = "CD";
	myStrcat(M, M2);
	puts(M);
	
}


#include<stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int *pnum;

	pnum = &num1;
	(*pnum) += 30;
	pnum = &num2;
	(*pnum) -= 30;

	printf("num1:%d, num2:%d \n", num1, num2);
	return 0;
}



#include<stdio.h>
int main(void)
{
	int arr[3] = { 15,25,35 };
	int *ptr = &arr[0];

	printf("%d %d \n", ptr[0],arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	return 0;
}


#include<stdio.h>
int main(void)
{
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };
	printf("%d %g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]);
	return 0;
}


#include<stdio.h>
int main(void)
{
	int arr[3] = { 0,1,2 };
	printf("배열의 이름: %p \n", arr);
	printf("첫 번째 요소: %p \n", &arr[0]);
	printf("두 번째 요소: %p \n", &arr[1]);
	printf("세 번째 요소: %p \n", &arr[2]);
	return 0;
}


#include<stdio.h>
int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	int *arr[3] = { &num1,&num2,&num3 };

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);
	return 0;

}

#include<stdio.h>
int main(void)
{
	int arr[3] = { 11,22,33 };
	int *ptr = arr;

	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");
	return 0;
}

#include<stdio.h>
int main(void)
{
	int tr1;
	double tr2;
	int *ptr1 = &tr1;
	double *ptr2 = &tr2;
	printf("%d %d %d \n", ptr1, ptr1 + 1, ptr1 + 2);
	printf("%d %d %d \n", ptr2, ptr2 + 1, ptr2 + 2);
	ptr1++;
	ptr2++;
	printf("%d %d \n", ptr1, ptr2);
	return 0;
}


#include<stdio.h>
int main(void)
{
	const char *strArr[3] = { "Simple", "String", "Array" };
	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[100] = "My String";
	const char *str2 = "Your String";
	printf("%s %s \n", str1, str2);
	strcpy_s(str1,"Our String");
	str2 = "Our String";

	printf("%s %s \n", str1, str2);
	return 0;
}
*/

/*
#include<stdio.h>
void main(void)
{
	int arr[3][2];
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			printf("%p \n", &arr[i][j]);
}



#include<stdio.h>
void main(void)
{
	int arr1[3][2];
	int arr2[2][3];
	printf("arr1: %d \n", arr1);
	printf("arr1+1: %d \n", arr1[0] + 1);
	printf("arr1+1: %d \n", arr1 + 1);
	printf("arr1+2: %d \n\n", arr1 + 2);
	printf("arr2: %d \n", arr2);
	printf("arr1+2: %d \n\n", arr2[1] + 2);
	printf("arr2+1: %d \n", arr2 + 1);
}
*/
/*
#include<stdio.h>
void MyUpper(char *a)
{
	if (97 <= *a && *a <= 122) *a -= 32;
}
void main()
{
	char a;
	scanf("%c", &a);
	MyUpper(&a);
	printf("%c", a);
}
*/


/*
#include<stdio.h>
void main()
{
	short a;
	short b;
	short c;
	a = 10;		*&b = *&a + 2;	*&a += 4;
	c = a + b;
	printf("%d\n", c);
}


#include<stdio.h>
void main()
{
	long M[3] = { 10,20,30 };
	long K;
	K = *M + M[1] + *(M + 1);
	K += *&M[2] + *M + 1;
	printf("%d\n", K);
}


#include<stdio.h>
void main()
{
	char M[] = { 'A','B','C','D' };
	int N = sizeof(M);
	int a;
	*&M[0] += 32;	*(M + 1) += 1;	++*(M + 2);	*(M + 3) += 2;
	for (a = 0; a < N; a++)
		putchar(*(M + a));
}


#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short a;
	a = M[0][0] + M[0][1] + M[1][0] + M[1][1];
	a += (*&M[1][0] + *M[0] + *(M[1] + 1));
	a -= **M;
	a += *(*(M + 1) + 1);
	printf("%d\n", a);
}


#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short a, sum = 0;
	*M[0] = 15;	*(M[0] + 1) = 25;
	*M[1] = 35;	M[0][2] = 45;
	**M = 17;	*(*(M + 1) + 1) = 47;
	*(*M + 1) = 27;	**(M + 1) = 37;
	M[1][-1] += 2;
	for (a = 0; a < 4; a++)
		sum += M[0][a];
	printf("%d\n", sum);
}


#include<stdio.h>
void main()
{
	short M[2][2][2] = { {{10,20},{30,40}},{{50,60},{70,80}} };
	int a, b, c;
	int i, k, m;
	short cnt = 0;

	++*M[0][0];
	*M[0][1] += 2;
	*M[1][0] += 3;
	*M[1][1] += 4;
	++*(M[0][0] + 1);
	*(M[0][1] + 1) += 2;
	*(M[1][0] + 1) += 3;
	*(*(M[0] + 0)) += 1;
	*(*(M[0] + 0) + 1) = *(*M[0] + 1) + *(**M + 1) + 2;
	*(*(M[0] + 1)) = *(*(*M + 1)) + 3;

	for (i = 0; i < 2; i++)
	{
		for (k = 0; k < 2; k++)
		{
			for (m = 0; m < 2; m++)
			{
				printf("%3d", M[i][k][m]);
			}
		}
		printf("\n\n");
	}

	for (a = 0; a < 2 * 2 * 2; a++)
		if (M[0][0][a] >= 40) M[0][0][a] /= 2;

	for (a = 0; a < 2; a++)
		for (b = 0; b < 2; b++)
			for (c = 0; c < 2; c++)
				if (M[a][b][c] / 10 == 2) cnt++;

	printf("%d\n", cnt);
	
}


#include<stdio.h>
void main()
{
	short a, b;
	short *ap;
	short c;
	*&a = 5;	ap = &b;	*ap = a;	*ap += 2;
	a = a + *ap;
	**&ap += 3;
	c = a + b;
	printf("%d\n", c);
}


#include<stdio.h>
void main()
{
	short M[] = { 10,20,30,40 };
	short *ap;
	short c;
	ap = M;
	c = *ap++;	c += *(ap + 1);
	c += *++ap;	c += ap[1]--;
	c += ap[1];
	printf("%d\n", c);
}



#include<stdio.h>
#include<string.h>
void main()
{
	char M[] = { 'P','A','E','\0' };
	char *ap;
	int a = 0;
	ap = M + strlen(M) - 1;
	printf("%c\n", *ap--);	*--ap = 'T';	printf("%s\n", ap);
	printf("%c\n", *++ap);	printf("%c\n", ap[a++]);
	printf("%c\n", ap[--a]);
}


#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short *ap;
	short c;
	ap = M[0];	c = *ap;	ap++;	c += *ap;
	ap += 2;	c += *ap;	c += *ap--;	c += *--ap;
	printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
	c += *ap;	c += ap[-1];	c += ++*ap;	ap++;
	c += ap[1];
	printf("%d\n", ++*ap);
	printf("%d\n", c);
}


#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short *ap;
	short c;
	ap = M[0];	c = *ap;
	ap++;	c += *ap;
	ap += 2;	c += *ap;
	c += *ap;
	c += *--ap;
	printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
	c += *(ap - 2);
	c += ap[-1];
	c += ++*ap;	ap++;	c -= ap[-1];
	printf("%d\n", ++*ap);
	printf("%d\n", c);
}


#include<stdio.h>
void main()
{
	short M[2][2] = { {10,20},{30,40} };
	short *ap, *bp;
	short a, sum = 0;
	ap = M[0];
	bp = M[0] + sizeof(M) / sizeof(M[0][0]) - 1;
	for (a = 0; a < sizeof(M) / sizeof(M[0][0]); a++)
		sum += *ap++ + *bp--;

	*--ap = 45;	*++bp = 15;	a = 0;	bp[++a]++;	++ap[-a--]; ap = M[0];
	for (; a < sizeof(M) / sizeof(M[0][0]); a++)
		sum -= ap[a];

	ap = M[1] - sizeof(M[0]) / sizeof(M[0][0]);
	printf("%d\n", sum);
	printf("%d %d %d %d \n", M[0][0], M[0][1], M[1][0], M[1][1]);
}
*/

/*
#include<stdio.h>
#include<string.h>					// 6페이지 13번
void main()
{
	char M[] = "ABC";
	const char *ap = "ABC";
	puts(M);	puts(ap);
	ap = "DEF";
	puts(ap);
	printf("%c", ap[1]);
	strcpy(M, "YZ");
	puts(M);

}
*/


/*
#include<stdio.h>
void main()
{
	char M[4] = "ABC";
	printf("%c%c%c\n", M[0], M[1], M[2]);
	*M = 'X';
	*(M + 1) = 'Y';
	*(M + 2) = 'Z';
	puts(M);
}


#include<stdio.h>
#include<string.h>
void main()
{
	char M[2][5] = { "ABC","XYZ" };
	printf("%c%c%c\n", M[0][0], M[0][1], M[0][2]);
	puts(&M[1][0]);
	*(M[0] + 1) = 'F';	*(M[1] + 1) = 'E';
	puts(M[0]);	puts(*M);
	strcpy(M[1], "GHI");
	puts(*(M + 1));
	printf("%c\n", **M);
}



#include<stdio.h>
void main()
{
	char M[] = "ABC";
	char *ap = M;
	*ap++ += 1;
	*++ap += 3;
	ap -= 2;
	ap[1] += 2;
	puts(M);
}


#include<stdio.h>
void main()
{
	char M[2][7] = { "KOREA","SEOUL" };
	char *ap = M[0];
	puts(M[0]);
	puts(ap);
	ap += sizeof(M[0]);
	puts(ap++);
	printf("%c\n", ap[2]);
	printf("%c\n", *ap--);
	puts(ap);
	printf("%c\n", *++ap);
}

#include<stdio.h>
void main()
{
	const char *ap = "KOREA";
	char M[5] = { 0 };
	int a = 0;
	M[0] = ap[a++];
	M[1]=*++ap;
	M[2] = ap[++a];
	M[3] = ap[a - 1];
	puts(M);
}
*/

// 13번 3번 부터 call by reference 방법으로 풀기
/*
#include<stdio.h>
void SaChick(double a,double b, double *ap)
{
	*ap = a + b;
	*++ap = a - b;
	*++ap = a * b;
	*++ap = a / b;
}
void main()
{
	double a = 5, b = 2;
	double M[4];
	SaChick(a, b, M);
	printf("%.1f  %.1f\n", M[0], M[1]);
	printf("%.1f  %.1f\n", M[2], M[3]);
}



#include<stdio.h>
#include "mystring.h"
void main()
{
	char s[100];
	gets_s(s);
	printf("length ===>%d",Mystrlen(s));
}



#include<stdio.h>
#include<string.h>
#include"mystring.h"
void main()
{
	char s[10];
	gets_s(s);
	Mystrreverse(s);
	puts(s);
}
*/




/*
#include<stdio.h>						// 공백제거
#include"mystring.h"
void main()
{
	char s[50];
	gets_s(s);
	Mynospace(s);
	puts(s);
}
*/



/*
#include<stdio.h>
#include<string.h>
#include"mystring.h"
void main()
{
	char M[6] = "AB";
	char M2[6] = "CD";
	myStrcat(M, M2);
	puts(M);
}
*/


/*
#include<stdio.h>
#include<string.h>									
#include"mystring.h"
void main()
{
	char M[4];
	puts(myStrcpy(M,"AB"));
}
*/


/*
#include<stdio.h>
#include<string.h>
#include"mystring.h"
void main()
{
	char M[4] = { 0, };
	myStrncpy(M, "ABCD", 3);
	puts(M);
}
*/





/*
#include<stdio.h>								
#include"mystring.h"
void main()								
{
	int i;
	scanf("%d", &i);
	AbsoluteValue(&i);
	printf("%d", i);
}
*/



/*
#include<stdio.h>
#include"mystring.h"
void main()
{
	char M[20];
	char S[20];
	printf("M, S 두 개의 문자열을 입력하시오 ");
	gets_s(M);
	gets_s(S);
	switch (MyStrcmp(M,S)) {
	case 0: printf("M, S는 같습니다"); break;
	case 1: printf("M이 더 큽니다"); break;
	case -1: printf("S가 더 큽니다"); break;
	}
}
*/





/*
#include<stdio.h>	
#include"mystring.h"								13번
void main()
{
	char m[20];
	char s[20];
	printf("M,S 두 개의 문자열을 입력하시오 (대소문자 구분X) \n");
	gets_s(m);
	gets_s(s);
	switch (MyStricmp(m, s)) {
	case 0: printf("두 개의 문자열은 같습니다"); break;
	case 1: printf("M이 더 큽니다"); break;
	case -1: printf("S가 더 큽니다"); break;

	}
}
*/



/*

#include<stdio.h>
#include<string.h>							//14번
#include"mystring.h"
void main()
{
	int i;
	char M[30];
	char S[30];
	printf("비교할 두 문자열(M,S)과 길이를 입력하시오");
	gets_s(M);
	gets_s(S);
	scanf("%d", &i);
	switch (MyStrincmp(M, S,i)) {
	case 0: printf("두 문자열은 같습니다"); break;
	case 1: printf("M이 더 큽니다"); break;
	case -1: printf("S가 더 큽니다"); break;
	}
}

*/


/*
#include<stdio.h>
#include "mystring.h"  // MyStrcmp
int MySearch(char *M, char *S)
{
	int i = 0, k = 0;
	char tmp[100];

	for (;;)
	{
		while(1)
		{
			tmp[k] = M[i];
			if (M[i] == 32  || M[i]==NULL) { tmp[k] = NULL; i++; break; }
			i++; k++;
		}
		if (MyStrcmp(tmp,S) == 0) return(1);
		k = 0;
		if (M[i] == NULL) break;
	}
	return(0);
}
void main()
{
	char s[100];
	char M[] = "YOU LOVE YOU YOO LOVE ME";
	printf("찾을 단어 : ");
	gets_s(s);
	if(MySearch(M, s)==1) printf("존재합니다");
	else if (MySearch(M, s) == 0)printf("존재하지 않습니다");

}
*/


/*
#include<stdio.h>
#include"mystring.h"
int MySearchcnt(char *M, char *S)
{
	char tmp[100];
	int k = 0, i = 0;
	int cnt = 0;

	for (;;)
	{
		while (1)
		{
			tmp[k] = M[i];
			if (M[i] == 32 || M[i] == NULL) { tmp[k] = NULL; i++; break; }
			i++; k++;
		}
		if (MyStrcmp(tmp, S) == 0) cnt++;
		if (M[i] == NULL) return(cnt);
		k = 0;

	}
}
void main()
{
	char M[] = "YOU LOVE YOU YOOLOVE LOVE ME LOVE YOU YOU";
	char s[100];
	printf("찾을 단어 :");
	gets_s(s);
	printf("%s = %d개존재", s, MySearchcnt(M, s));

}
*/


/*
#include<stdio.h>										// 17번
#include<string.h>
#include"mystring.h"
void MyChange(char *M,char *ap, char *bp)
{
	char tmp[100];
	char tmp2[100];
	int k = 0, i = 0;
	int c;
	int n = 0;
	int m;
	int a, b;

	for (;;)
	{
		while (1)
		{
			tmp[k] = *M;
			if (*M == NULL || *M == 32) { tmp[k] = NULL;  break; }
			M++; k++;
		}
		k = 0;
		if (MyStrcmp(tmp, ap) == 0) {
			
			MyStrcpy(tmp2, M);
			M = M - strlen(ap);
			MyStrcpy(M, bp);
			M = M + strlen(bp);
			MyStrcat(M, tmp2);

		}
		if (*M == NULL) break;
		
		M++;
	}
}
void main()
{
	char M[100] = "YOU LOVE YOU YOO LOVE LOVE ME YOU ME";
	char ap[100];
	char bp[100];
	printf("찾을 문자열 :");
	gets_s(ap);
	printf("바꿀 문자열 :");
	gets_s(bp);
	MyChange(M,ap, bp);
	puts(M);

}

*/









/*
#include<stdio.h>
void SwaplntPtr(int *p1, int *p2)
{
	int c;
	c = *p1;
	*p1 = *p2;
	*p2 = c;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2:  %d %d \n", *ptr1, *ptr2);
	SwaplntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	return 0;
}

*/

/*
#include<stdio.h>
#include "mystring.h"
void main()
{
	char name[100];
	char t[100];
	char a[100];
	printf("이름을 입력하시오 : ");
	gets_s(name);
	printf("전화번호를 입력하시오 : ");
	gets_s(t);
	printf("주소를 입력하시오 : ");
	gets_s(a);
	myStrcat(name, t);
	myStrcat(name, a);
	puts(name);

}
*/





/*
#include<stdio.h>										// 20번
#include "mystring.h"										
void main()
{
	char n1[100];
	char n2[100];
	char c[200];
	int carry = 0;
	int i;

	printf("첫번째 숫자를 입력하세요 : ");
	gets_s(n1);
	printf("두번째 숫자를 입력하세요 : ");
	gets_s(n2);
	Mystrreverse(n1);
	Mystrreverse(n2);

	for (i = 0;; i++)
	{
		if (n2[i] == NULL || n1[i] == NULL) break;
		c[i] = n1[i] - '0' + n2[i] + carry;
		if (c[i] > 57) {
			carry = 1; c[i] -= 10;
		}
		else carry = 0;
	
	}

	if (n2[i] == NULL) {
		while (n1[i] != NULL)
		{
			c[i] = n1[i] + carry;
			if (c[i] > 57) {
				carry = 1; c[i] -= 10;
			}
			else carry = 0;
			i++;
		}
		if (n1[i] == NULL) c[i] = NULL;
	}

	else if (n1[i] == NULL) {
		while (n2[i] != NULL)
		{
			c[i] = n2[i] + carry;
			if (c[i] > 57) {
				carry = 1; c[i] -= 10;
			}
			else carry = 0;
			i++;
		}
		
	}

		if (carry == 1) { c[i] =(carry+'0') ; c[i+1] = NULL; }
		else c[i] = NULL;


	Mystrreverse(c);
	puts(c);

}

*/


























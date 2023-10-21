
/*
#include<stdio.h>
int main()
{
	FILE *ifp, *ofp;

	ifp = fopen("c:\\data\\a.txt", "r");
	if (ifp == NULL)
	{
		printf("입력파일이 개방되지 않았습니다 ");
		//return 1;
	}

	//printf("입력파일이 개방되었습니다 ");

	ofp = fopen("c:\\data\\b.txt", "w");
	if (ofp == NULL)
	{
		printf("출력파일이 개방되지 않았습니다 ");
		return 1;
	}
	printf("출력파일이 개방되었습니다 ");
	return 0;
}

*/

/*

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;

	fp = fopen("c:\\data\\a.txt", "r");
	if (fp == NULL)
	{
		printf("파일 개방 실패 "); 
		return 1;
	}

	ch = fgetc(fp);
	printf("입력한 문자 : %c\n", ch);
	fclose(fp);
	return 0;
}

*/

/*
#include<stdio.h>
void main(void)
{
	FILE *in;
	char ch;
	in = fopen("c:\\data\\a.txt", "r");
	if (in == NULL) { puts("File Not Found"); return; }
	
	while (1)
	{
		ch = fgetc(in);
		if (ch == EOF)  break; 
		putchar(ch);
	}
}
*/

/*
#include<stdio.h>
void main()
{
	FILE *out;
	out = fopen("c:\\data\\my3.txt", "w");
	fprintf(out, "%10s%10s%10s\n", "이름", "나이", "시력");
	fprintf(out, "%10s%10d%10.1f\n", "길동", 11, 1.5);
	fclose(out);
}
*/

/*
#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;

	fp = fopen("c:\\data\\b.txt", "w");
	if (fp == NULL)
	{
		printf("파일 개방 실패 ");
		return 1;
	}

	printf("데이터를 입력하세요 ");
	while (1) {
		ch = getchar();
		if (ch == EOF) break;
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}

*/


/*
#include<stdio.h>
void main()
{
	FILE *out;
	char M[11] = "ABCD";
	out = fopen("c:\\data\\my2.txt", "w");
	fputs(M, out);
	fputs("E", out);
	fputs("\n", out);
	fputs("FG\n", out);
	fputs("HIJK" + 2, out);
	fclose(out);
}

*/

/*
#include<stdio.h>
void main()
{
	FILE *in;
	char M[11];
	int K, E;
	in = fopen("c:\\data\\my3.txt", "r");
	if (in == NULL)
	{
		puts("File Not Found");
		return;

	}

	int j;
	while (1) {
		j = fscanf(in,"%s%d%d", M, &K, &E);
		if (j == EOF) break;
		printf("%6s%6s%6s\n", "이름", "국어", "영어");
		printf("%6s%6d%6d", M, K, E);
		getchar();
	
	}
	fclose(in);
}

*/

// 7페이지 1번

/*
#include<stdio.h>
#include<string.h>
void main()
{
	char s[10];
	int a, b;
	FILE *f;
	f = fopen("C:\\data\\myfruit.txt", "w");

	while (1)
	{
		printf("과일이름 : 숫자 : 숫자\n");
		scanf("%s", s);
		if (strcmp(s, "end") == 0) break;

		scanf("%d%d", &a, &b);
		fprintf(f, "%5s%5d%5d\n", s, a, b);
	}
	
	fclose(f);


}
*/


/*
#include<stdio.h>
void main()
{
	char name[10];
	int a, b;
	int j;
	int suma, sumb, sums;
	suma = sumb =sums= 0;
	FILE *fp;
	fp = fopen("c:\\data\\myfruit.txt", "r");
	printf("*** 매출현황 ***\n");
	printf("%5s %5s %5s %5s\n", "품목", "단가", "수량", "금액");
	while (1)
	{
		j=fscanf(fp, "%s%d%d", name, &a, &b);
		if (j == EOF) break;
		printf("%5s %5d %5d %5d\n", name, a, b, a * b);
		suma += a;
		sumb += b;
		sums += a * b;

	}
	printf("------------------------\n");
	printf("%5s %5d %5d %5d", "합", suma, sumb, sums);

	fclose(fp);
}
*/


/*

// 7페이지 3번													// 해결안됌

#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *user;
	user = fopen("C:\\data\\a.txt", "w");
	int n;
	char num[20];
	char name[10];
	char gender[10];
	char tell[20];
	char address[50];

	while (1)
	{
		printf("1. 입력 2. 종료\n");
		scanf("%d", &n);
		printf("%d", n);
		//getchar();
		if (n == 2) break;
		if (n == 1) {
			printf("주민번호 : ");
			scanf("%s", num);
			printf("이   름 : ");
			scanf("%s", name);
			printf("성   별 : ");
			scanf("%s", gender);
			printf("전화번호 : ");
			scanf("%s", tell);
			printf("주   소 : ");	
			getchar();
			gets_s(address);
			printf("%s %s %s %s %s\n", num, name, gender, tell, address);


			fprintf(user, "%s\n%s\n%s\n%s\n%s\n\n", num, name, gender, tell, address);
		}


	}
	fclose(user);
}

*/





/*
#include<stdio.h>
void main()
{
	printf("%-15s%-10s%-15s%-10s%-15s%-10s\n", "주민번호", "이 름", "생년월일", "성별", "전화번호", "주 소");
	int j;
	FILE *name;
	name = fopen("C:\\data\\a.txt", "r");

	while (1)
	{
		j=fscanf(name,"%s%s%s%s%s",)
	}
}
*/

/*
#include<stdio.h>
struct KT {
	int bunho;
	int jumsu;
};

void main()
{
	struct KT M = { 2,80 };
	struct KT *ap;
	ap = &M;
	printf("번호=%d\n", (*ap).bunho);
	printf("점수=%d\n", (*ap).jumsu);

}




#include<stdio.h>
struct KT
{
	int bunho;
	int jumsu;
};

void main()
{
	struct KT M = { 2,80 };
	struct KT *ap;
	ap = &M;
	printf("번호=%d\n", ap->bunho);
	printf("점수=%d\n", ap->jumsu);
}

*/


/*
#include<stdio.h>					// 4페이지 11번
typedef struct KT
{
	int kor;
	int eng;
}KE;

typedef struct MT
{ 
	int bun;
	KE Fir;
	KE Sec;
}Gu;

void HeadTitle()
{
	printf("%40s\n", "성적표");
	printf("%25s%20s\n", "1차", "2차");
	printf("%10s%10s%10s%10s%10s\n", "번호", "국어", "영어", "국어", "영어");
}

void List(Gu K)
{
	printf("%10d%10d%10d%10d%10d\n", K.bun, K.Fir.kor, K.Fir.eng,K.Sec.kor, K.Sec.eng);
}

void main()
{
	Gu M[3] = { {1,70,80,90,95},{2,60,70,80,90},{3,50,60,70,80} };
	KE lm;
	lm = M[0].Sec; M[0].Sec = M[2].Fir; M[2].Fir = lm;
	HeadTitle();
	List(M[0]);
	List(M[1]); List(M[2]);
}

*/






/*
//5페이지 1번

#include<stdio.h>
#include<string.h>
struct fr {
	char name[10];
	char tell[100];
};

void regis(struct fr *M,int i)
{

	printf("친구 이름을 입력하시오 :");
	scanf("%s", &(M+i)->name);
	printf("친구 번호를 입력하시오 :");
	scanf("%s", &(M+i)->tell);


}


void print(struct fr *M, int i)
{
	for (int k = 0; k < i; k++)
	{
		
		printf("%4s\t%4s\n", (M+k)->name, (M+k)->tell);
	}
}


void search(struct fr *M, int i)
{
	char n[10];
	printf("찾을 친구 이름을 입력하시오 :");
	gets_s(n);
	for (int k = 0; k < i; k++)
	{
		if (strcmp(n, (M+k)->name) == 0) printf("%s의 번호는 %s입니다\n", (M+k)->name, (M+k)->tell);
	}

}

int remove(struct fr *M, int i)
{
	char n[10];
	printf("삭제할 친구의 이름을 입력하시오 :");
	gets_s(n);
	for (int k = 0; k < i; k++)
	{
		if (strcmp(n, (M+k)->name) == 0) {
			for (int j = k; j < i; j++)
			{
				M[j] = M[j + 1];
			}
			printf("삭제되었습니다!\n"); return(1);

		}
	}
	
}

void change(struct fr *M, int i)
{
	char n[10];
	printf("정보를 변경할 친구의 이름을 입력하시오 :");
	gets_s(n);
	for (int k = 0; k < i; k++)
	{
		if (strcmp(n, (M + k)->name) == 0) {
			printf("변경할 이름을 입력하시오 :");
			scanf("%s", &(M + k)->name);
			getchar();
			printf("변경할 번호를 입력하시오 :");
			scanf("%s", &(M + k)->tell);
			printf("변경되었습니다!\n"); break;
		}
		
	}

}

void main()
{
	struct fr M[10];
	int i = 0;
	for (;;)
	{
		printf("=== 메 뉴 ===\n");
		printf("1. 친구 등록\n");
		printf("2. 친구 리스트 출력\n");
		printf("3. 친구 찾기\n");
		printf("4. 친구 삭제\n");
		printf("5. 친구정보 변경\n");
		printf("6. 종료\n");

		int n;
		printf("선택 =>");
		scanf("%d", &n);
		getchar();

		if (n == 1) {
			regis(M, i);
			i++;
		}

		if (n == 2) {
			print(M, i);
		}

		if (n == 3) {
			search(M, i);
		}

		if (n == 4) {
			int a=remove(M, i);
			if (a == 1) i--;
			
		}


		if (n == 5) {
			change(M, i);
		}

		if (n == 6) break;
	}
	
}


*/


/*

// 5페이지 2번				

#include<stdio.h>
typedef struct subject {
	int kor;
	int eng;
	int math;
}sub;

typedef struct total {
	float kor;
	float eng;
	float math;
}K;

struct test {
	int code;
	char name[20];
	sub mid;
	sub fin;
	K tot;
	int rank;
};


void input(struct test *M,int i)
{
	printf("학번을 입력하시오");
	scanf("%d", &(M+i)->code);
	getchar();
	printf("이름을 입력하시오");
	gets_s((M+i)->name);
	printf("중간고사 국어, 영어, 수학 점수를 차례대로 입력하시오");
	scanf("%d%d%d", &(M+i)->mid.kor, &(M+i)->mid.eng, &(M+i)->mid.math);
	printf("기말고사 국어, 영어, 수학 점수를 차례대로 입력하시오");
	scanf("%d%d%d", &(M+i)->fin.kor, &(M+i)->fin.eng, &(M+i)->fin.math);
	(M + i)->tot.kor = ((M + i)->mid.kor + (M + i)->fin.kor) / 2;
	(M + i)->tot.eng = ((M + i)->mid.eng + (M + i)->fin.eng) / 2;
	(M + i)->tot.math = ((M + i)->mid.math + (M + i)->fin.math) / 2;
}


void output(struct test *M,int k)
{
	int i;
	int R[5];
	int cnt = 1;
	struct test tmp;
	for (i = 0; i < k; i++)
	{
		(M + i)->rank = (M + i)->tot.kor + (M + i)->tot.eng + (M + i)->tot.math;
	}
	for (int c = 0; c < k; c++)
	{
		for (int a = 0; a < k; a++)
		{
			if ((M + c)->rank < (M + a)->rank) cnt++;
			
		}
		R[c]= cnt;	
		cnt = 1;
	}
	for (i = 0; i < 5; i++)
	{
		(M + i)->rank = R[i];
	}
	for (int a = 0; a < k-1; a++)
	{
		for (int b = a; b < k; b++)
		{
			if ((M + a)->rank > (M + b)->rank) {
				tmp = M[a];
				M[a] = M[b];
				M[b] = tmp;
			}
		}
	}

	for (int p = 0; p < k; p++)
	{
		printf("%4d%5s%3d%3d%3d%3d%3d%3d  %3.1f  %3.1f  %3.1f%3d\n",(M+p)->code, (M + p)->name, (M + p) ->mid.kor, (M + p) ->mid.eng, (M + p) ->mid.math,
			(M + p)->fin.kor, (M + p)->fin.eng, (M + p)->fin.math, (M + p)->tot.kor, (M + p)->tot.eng, (M + p)->tot.math, (M + p)->rank);
	}
	 
	struct sum {
		int kor = 0;
		int eng = 0;
		int math = 0;
	};
	struct sum subject;

	int av;
	for (i = 0; i < 5; i++)
	{
		subject.kor += (M + i)->tot.kor * 2;
		subject.eng += (M + i)->tot.eng * 2;
		subject.math += (M + i)->tot.math * 2;
	}
	printf("각 과목별 합계 점수는 국어 = %d  영어 = %d  수학 = %d\n", subject.kor, subject.eng, subject.math);
	printf("각 과목별 평균 점수는 국어 = %.1f  영어 = %.1f  수학 = %.1f\n", subject.kor/10.0, subject.eng/10.0, subject.math/10.0);


}

void main()
{
	struct test M[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		input(M, i);
	}
	
	output(M, i);


}


*/



/*
// 5페이지 3번

#include<stdio.h>
#include<string.h>
struct seat {
	char s[10] = "---";
};

struct my {
	struct seat s[10];
};

void num1(struct my *M)
{
	int n;
	int num;
	printf("몇호기 ? :");
	scanf("%d", &n);
	printf("좌석번호 :");
	scanf("%d", &num);
	printf("예약자이름 :");
	scanf("%s", &(M+n-1)->s[num-1].s);
}

void num2(struct my *M)
{
	int n;
	int num;
	printf("몇호기 ? :");
	scanf("%d", &n);
	printf("좌석번호 :");
	scanf("%d", &num);
	strcpy((M + n - 1)->s[num-1].s, "---");
	printf("예약이 취소되었습니다\n");
}

void num3(struct my *M)
{
	printf("\t1    2    3    4    5    6    7    8    9    10\n\n");
	for (int i = 0; i < 5; i++)
	{
		for (int n = 0; n < 10; n++)
		{
			if (n == 0) printf("%d호기 ", i + 1);
			printf("%5s", (M + i)->s[n].s);
		}
		printf("\n");
	}
}


void main()
{
	int n;
	struct my M[5];
	for (;;)
	{
		printf("============\n");
		printf("1.좌석예약\n");
		printf("2.예약취소\n");
		printf("3.좌석상태 출력\n");
		printf("4.종료\n");
		printf("============\n");
		printf("선택 =>");
		scanf("%d", &n);
		if (n == 4) break;
		if (n == 1) num1(M);
		if (n == 2) num2(M);
		if (n == 3) num3(M);
		
	}
}


*/



/*
// 6페이지 4번

#include<stdio.h>
#include<string.h>
typedef struct data_List {
	int no;
	char text[100];
	char hash_code[100][20];
	int hash_count;
}DT;


void num1(DT *M, int i)
{
	(M + i)->no = i+1;
	char hash[100];
	printf("%d번째", i+1);
	printf("text : ");
	gets_s((M + i)->text);
	printf("hash_code : ");
	gets_s(hash);
	int u = 0;
	int k1 = 0;
	for (int k = 1; k < strlen(hash);k++)
	{
		if (hash[k] == '#'|| hash[k]==NULL) {
			(M + i)->hash_code[u][k1] = NULL;
			u++;
			k1 = 0;
		}

		else {
			(M + i)->hash_code[u][k1] = hash[k];
			k1++;
		}
			
	}

	printf("태그갯수 : %d\n", u);

	for (int p = 0; p <u; p++)
	{
		printf("%s", (M+i)->hash_code[p]);
	}


}

void num2(DT *M)
{
	char key[10];
	printf("키워드 :");
	scanf("%s", &key);
	for (int i = 0; i < 20; i++)
	{
		if (strcmp((M + i)->hash_code[i], key) == 0) {
			printf("%s", (M + i)->text); break;
		}
	}
}

void num3()
{

}


void main()
{
	DT M[3];
	int n;
	int i = 0;
	for (;;)
	{
		printf("== menu\n");
		printf("1. 입력\n");
		printf("2. 조회\n");
		printf("3. 삭제\n");
		printf("4. 종료\n");
		printf("==>");
		scanf("%d",&n);
		getchar();
		if (n == 1) {
			num1(M, i); i++;
		}

		if (n == 2) num2(M);
	}

}

*/











/*

// 6페이지 4번 다시 함          3번 삭제 기능 완성하기

#include<stdio.h>
#include<string.h>
int i;
struct data_List {
	int no;
	char text[100];
	char hash_code[100][20];
	int hash_count;
};

void num1(struct data_List *M)
{
	char tmp[100];
	(M + i)->no = i + 1;
	printf("text : ");
	gets_s((M + i)->text);
	printf("hash_code :");
	gets_s(tmp);
	int u = 0;
	int j = 0;
	for (int k = 1; k <= strlen(tmp); k++)
	{
		if (tmp[k] == NULL) { (M + i)->hash_code[u][j] = NULL;  break; }
		if (tmp[k] == '#') { 
			(M + i)->hash_code[u][j] = NULL;  u++; j = 0;
		}
		else {
			(M + i)->hash_code[u][j] = tmp[k];
			j++;
		}
	}
	(M + i)->hash_count = u+1;
	i++;

}


void num2(struct data_List *M)
{
	char key[10];
	printf("키워드 :");
	gets_s(key);

	for (int k = 0; k < i; k++)
	{
		for (int c = 0; c < (M + k)->hash_count; c++)
		{
			if (strcmp((M + k)->hash_code[c], key) == 0) { puts((M + k)->text); }
		}
	}

}


void num3(struct data_List *M)
{
	int n;
	printf("몇 번을 삭제하시겠습니까 ? :");
	scanf("%d", &n);
	for (int k = 0; k < i; k++)
	{
		if ((M + k)->no == n) {
			for (int c = k; c < i - 1; c++)
			{
				M[c] = M[c + 1];
			}
			i--;

		}
	}

}


void main()
{
	int n;
	int i = 0;
	struct data_List M[5];
	for (;;)
	{
		printf("=== menu\n");
		printf("1. 입력\n");
		printf("2. 조회\n");
		printf("3. 삭제\n");
		printf("4. 종료\n");
		printf("==> ");
		scanf("%d", &n);
		getchar();

		if (n == 1) { num1(M); }
		if (n == 2) { num2(M); }
		if (n == 3) { num3(M); }
		if (n == 4) break;

	}

}
*/





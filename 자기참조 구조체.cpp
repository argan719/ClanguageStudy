
/*
#include<stdio.h>
struct KT
{
	int nai;
	struct KT *next;
};

void main()
{
	struct KT M, N;
	struct KT *ap = &N;
	N.nai = 10;
	N.next = &M;
	M.nai = 20;
	M.next = NULL;
	printf("%3d", N.nai);
	printf("%3d", M.nai);
	printf("%3d", N.next->nai);
	printf("%3d", ap->next->nai);
}

*/


/*
// 2페이지 3번

#include<stdio.h>
#include<stdlib.h>
struct KT
{
	int nai;
	struct KT *next;
};

typedef struct KT Gu;
void main()
{
	Gu *hp, *ap;
	hp = (Gu*)malloc(sizeof(Gu));
	ap = hp;
	ap->nai = 5;
	ap->next = (Gu*)malloc(sizeof(Gu));
	ap = ap->next;
	ap->nai = 10;
	ap->next = NULL;
	ap = hp;
	while (1)
	{
		if (ap == NULL) break;
		printf("%3d", ap->nai);
		ap = ap->next;
	}
	free(hp->next); free(hp);
}
*/






/*

// 3페이지 1번
#include<stdio.h>
#include<stdlib.h>

struct bye{
	char s;
	struct bye *next;
};

void main()
{
	struct bye *ap, *cp;
	ap = NULL;
	cp = NULL;
	
	for (;;)
	{
		char word;
		printf("문자입력(종료=Q) : ");
		scanf("%s", &word);
		if (word == 'Q') break;
		if (ap == NULL)
		{
			ap = (struct bye*)malloc(sizeof(struct bye));
			cp = ap;
			
		}
		else {
			cp->next = (struct bye*)malloc(sizeof(struct bye));
			cp = cp->next;
		}
			cp->s = word;
			cp->next = NULL;

	}
	cp = ap;
	while (1) {
		if (cp == NULL) break;
		printf("%c", cp->s);
		cp = cp->next;
	}
}


*/






/*
// 3페이지 2번							-> *중요* 복습 .필기 하기

#include<stdio.h>
#include<stdlib.h>
typedef struct str {
	char s;
	struct str *next;

}ST;

void main()
{
	ST *sp, *ep, *cp;
	sp =ep = NULL; 
	for (;;)
	{
		char ch;
		printf("입력할 문자 :");
		scanf("%c", &ch);
		getchar();
		if (ch == 'Q') break;

		if (sp == NULL)
		{
			sp = (ST *)malloc(sizeof(ST));
			ep = sp;

		}
		else {
			
			ep->next= (ST *)malloc(sizeof(ST));
			ep = ep->next;
		}

		ep->s = ch;
		ep->next = NULL;

		cp = sp;
		while (cp!= NULL)
		{
			printf("%c ->", cp->s);
			cp = cp->next;
		}
		printf("%s\n","NULL");
	}
}

*/





/*

// 3페이지 3번 & 4번

#include<stdio.h>
#include<stdlib.h>
typedef struct str {
	char s;
	struct str *next;

}ST;



void input(ST *sp, ST **ep)
{
	sp = ep = NULL;
	for (;;)
	{
		char ch;
		printf("입력할 문자 :");
		scanf("%c", &ch);
		getchar();
		if (ch == 'Q') break;

		if (sp == NULL)
		{
			sp = (ST *)malloc(sizeof(ST));
			ep = sp;

		}
		else {

			ep->next = (ST *)malloc(sizeof(ST));
			ep = ep->next;
		}

		ep->s = ch;
		ep->next = NULL;

		
	}
}

void output()
{
	ST *cp;
	cp = sp;
	while (cp != NULL)
	{
		printf("%c ->", cp->s);
		cp = cp->next;
	}
	printf("%s\n", "NULL");
}


void search()
{

}



void main()
{
	ST *sp, *ep;
	sp = ep = NULL;
	int n;

	while (1)
	{
		printf("== 메뉴 ==\n");
		printf("1.문자입력\n");
		printf("2. 리스트 출력\n");
		printf("3. 문자검색\n");
		printf("4. 종료\n");
		printf("==>");
		scanf("%d", &n);

		if (n == 1) {
			sp = input(sp, &ep);

		}
		if (n == 2) output(sp);

		if (n == 3) search();
	}

}

*/


/*
// 3페이지 2번

#include<stdio.h>
#include<stdlib.h>
typedef struct str {
	char data;
	struct str * next;
}str;


void main()
{
	str *sp, *ep, *cp;
	char c;
	sp = ep = NULL;

	for (;;)
	{
		printf("입력할 문자 : ");
		scanf("%c", &c);
		getchar();

		if (c == 'Q') break;

		if (sp == NULL)
		{
			sp = (str*)malloc(sizeof(str));
			sp->data = c;
			sp->next = NULL;
			ep = sp;
		}

		else {
			ep->next = (str*)malloc(sizeof(str));
			ep = ep->next;
			ep->data = c;
			ep->next = NULL;
		}

		cp = sp;
		
		while (cp!= NULL)
		{
			printf("%c -> ", cp->data);
			cp = cp->next;
		}
		printf("NULL\n");
	}
	
	
	
}

*/


/*
// 3페이지 3번 & 4번

#include<stdio.h>
#include<stdlib.h>
typedef struct str {
	char data;
	struct str * next;
}str;


void input(str **sp, str **ep)
{
	char c;
	getchar();
	printf("입력할 문자 : ");
	scanf("%c", &c);

	if (*sp == NULL)
	{
		*sp = (str*)malloc(sizeof(str));
		*ep = *sp;
	}
	else {
		(*ep)->next = (str*)malloc(sizeof(str));
		*ep = (*ep)->next;
	}
	(*ep)->data = c;
	(*ep)->next = NULL;
	
}

void print( str **sp)
{
	str *cp;
	cp = *sp;

	while (cp != NULL)
	{
		printf("%c -> ", cp->data);
		cp = cp->next;
	}
	printf("NULL\n");
}


void search(str **sp, str **ep)
{	
	str *cp;
	cp = *sp;

	char key;
	int i = 1;
	getchar();
	printf("찾을 문자 :");
	scanf("%c", &key);

	while (cp != NULL)
	{
		if (cp->data == key) { printf("%d번째에 %c가 있습니다\n", i, key); break; }
		i++;
		cp = cp->next;
	}
	if (cp == NULL) printf("그런 문자는 존재하지 않습니다\n");
}

void main()
{
	int n;
	str *sp, *ep;
	sp = ep =  NULL;

	for (;;)
	{
		printf("1. 문자입력\n");
		printf("2. 리스트출력\n");
		printf("3. 문자검색\n");
		printf("4. 종료\n");
		printf("==>");
		scanf("%d", &n);
		if (n == 4) break;

		if (n == 1) input(&sp,&ep);

		if (n == 2) print(&sp);

		if (n == 3) search(&sp, &ep);

	}
}

*/




/*
// 5번 하기 

#include<stdio.h>
#include<stdlib.h>



typedef struct b {
	char data;
	struct b *next;
}b;

void ainput(b **sp,  b **ep)
{
	char n;

	printf("정수입력 : ");
	getchar();
	scanf("%c", &n);

	if (*sp == NULL) {
		*sp =( b*)malloc(sizeof(b));
		*ep = *sp;
	}

	else {
		(*ep)->next = ( b*)malloc(sizeof(b));
		*ep = (*ep)->next;

	}
	(*ep)->data = n;
	(*ep)->next = NULL;


}

void aoutput(b **sp)
{
	b *cp;
	cp = *sp;
	printf("A list :");

	while (cp != NULL)
	{
		printf("%c ", cp->data);
		cp = cp->next;
	}
	printf("\n");


}

void binput(b **sp, b **ep)
{
	char c;
	printf("문자입력 :");
	getchar();
	scanf("%c", &c);

	if (*sp == NULL)
	{
		*sp = (b *)malloc(sizeof(b));
		*ep = *sp;
	}

	else {
		(*ep)->next = (b*)malloc(sizeof(b));
		*ep = (*ep)->next;
	}
	(*ep)->data = c;
	(*ep)->next = NULL;
}

void boutput(b **sp)
{
	b *cp;
	cp = *sp;
	printf("B list :");

	while (cp != NULL)
	{
		printf("%c ", cp->data);
		cp = cp->next;
	}
	printf("\n");

}

void coutput(b **asp,  b **bsp)
{
	b *ap, *bp;
	ap = *asp;
	bp = *bsp;

	b *csp, *cep, *ccp;

	cep = csp = NULL;


	while (1)
	{
		if (ap == NULL || bp == NULL) break;


		if (csp == NULL)
		{
			csp = (b *)malloc(sizeof(b));
			cep = csp;
		}
		else
		{
			cep->next = (b *)malloc(sizeof(b));
			cep = cep->next;
		}

		cep->data = ap->data;
		ap = ap->next;

		cep->next = (b *)malloc(sizeof(b));
		cep = cep->next;
		cep->data = bp->data;
		cep->next = NULL;
		bp = bp->next;


	}

	if (ap != NULL) {
		while (ap != NULL)
		{
			cep->next = (b *)malloc(sizeof(b));
			cep = cep->next;

			cep->data = ap->data;
			cep->next = NULL;
			ap = ap->next;
		}
	}

	if (bp != NULL)
	{
		while (bp != NULL)
		{
			cep->next = (b *)malloc(sizeof(b));
			cep = cep->next;

			cep->data =bp->data;
			cep->next = NULL;
			bp =bp->next;
		}
	}
	

	ccp = csp;
	while (ccp != NULL)
	{

		printf("%c ", ccp->data);
		ccp = ccp->next;
	}
	printf("\n");

}

void main()
{
	int n;

	struct b *asp, *aep, *bsp, *bep;

	asp = aep = bsp = bep = NULL;

	struct b *sp, *ep;
	sp = ep = NULL;


	for (;;)
	{
		printf("== menu\n");
		printf("1. A 자료입력\n");
		printf("2. A 리스트출력\n");
		printf("3. B 자료입력\n");
		printf("4. B 리스트출력\n");
		printf("5. C 리스트출력\n");
		printf("6. 종료\n");
		printf("==> 선택 ");
		scanf("%d", &n);

		if (n == 6) break;

		if (n == 1) ainput(&asp, &aep);

		if (n == 2) aoutput(&asp);

		if (n == 3) binput(&bsp,&bep);

		if (n == 4) boutput(&bsp);

		if (n == 5) coutput(&asp, &bsp);
	}

}

*/

//5번 다시

/*
// A, B 리스트 병합해서 C 리스트 생성

#include<stdio.h>
#include<stdlib.h>

typedef struct c {
	char data;
	struct c *next;
}combine;

void ainput(combine **sp, combine **ep)
{
	char tmp;
	getchar();
	printf("정수입력 : ");
	scanf("%c", &tmp);
	if (*sp == NULL)
	{
		*sp = (combine *)malloc(sizeof(combine));
		*ep = *sp;
	}
	else
	{
		(*ep)->next = (combine *)malloc(sizeof(combine));
		(*ep) = (*ep)->next;
	}

	(*ep)->data = tmp;
	(*ep)->next = NULL;
}

void aoutput(combine **sp)
{
	combine *cp;
	cp = *sp;

	printf("A list : ");
	while (cp != NULL)
	{
		printf("%c ", cp->data);
		cp = cp->next;
	}
	printf("\n");
}

void binput(combine **sp, combine **ep)
{
	char tmp;
	getchar();
	printf("문자입력 : ");
	scanf("%c", &tmp);
	if (*sp == NULL)
	{
		*sp = (combine *)malloc(sizeof(combine));
		*ep = *sp;
	}
	else
	{
		(*ep)->next = (combine *)malloc(sizeof(combine));
		(*ep) = (*ep)->next;

	}

	(*ep)->data = tmp;
	(*ep)->next = NULL;
}

void boutput(combine **sp)
{
	combine *cp;
	cp = *sp;

	printf("B list : ");
	while (cp != NULL)
	{
		printf("%c ", cp->data);
		cp = cp->next;
	}
	printf("\n");
}

void coutput(combine **ap,combine **bp)
{
	combine *sp, *ep, *cp;
	sp = ep = NULL;
	combine *asp = *ap;
	combine *bsp = *bp;

	while (asp != NULL && bsp != NULL)
	{
		if (sp == NULL)
		{
			sp = (combine *)malloc(sizeof(combine));
			ep = sp;
		}
		else
		{
			ep->next = (combine *)malloc(sizeof(combine));
			ep = ep->next;
		}

		ep->data = asp->data;
		asp = asp->next;
		ep->next = (combine *)malloc(sizeof(combine));
		ep = ep->next;
		ep->data = bsp->data;
		bsp = bsp->next;

	}

	if (asp == NULL)
	{
		while (bsp != NULL)
		{
			ep->next = (combine *)malloc(sizeof(combine));
			ep = ep->next;
			ep->data = bsp->data;
			bsp = bsp->next;
			ep->next = NULL;
		}
	}
	
	if (bsp == NULL)
	{
		while (asp != NULL)
		{
			ep->next = (combine *)malloc(sizeof(combine));
			ep = ep->next;
			ep->data = asp->data;
			asp = asp->next;
			ep->next = NULL;
		}
	}

	cp = sp;
	printf("C list : ");

	while (cp != NULL)
	{
		printf("%c ", cp->data);
		cp = cp->next;
	}
	printf("\n");

}

void main()
{
	combine *asp, *aep;
	asp = aep = NULL;
	combine *bsp, *bep;
	bsp = bep = NULL;

	int n;
	for (;;)
	{
		printf("=== menu\n");
		printf("0. 종료\n");
		printf("1. A 자료입력\n");
		printf("2. A 리스트출력\n");
		printf("3. B 자료입력\n");
		printf("4. B 리스트출력\n");
		printf("5. C 리스트출력\n");
		getchar();
		printf("==> 선택 ");
		scanf("%d", &n);

		if (n == 0) { printf("End..."); break; }
		if (n == 1) ainput(&asp,&aep);
		if (n == 2) aoutput(&asp);
		if (n == 3) binput(&bsp,&bep);
		if (n == 4) boutput(&bsp);
		if (n == 5) coutput(&asp,&bsp);

	}
}

*/


/*
// 7페이지 11번

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student {
	int code;
	char name[10];
	int kor;
	int eng;
	int math;
	struct student *next;
}score;

void input(score **sp, score **ep)
{
	char an;
	for (;;)
	{
		if (*sp == NULL)
		{
			*sp = (score *)malloc(sizeof(score));
			*ep = *sp;
		}
		else {
			(*ep)->next = (score *)malloc(sizeof(score));
			(*ep) = (*ep)->next;
		}

		printf("학번 : ");
		scanf("%d", &(*ep)->code);
		printf("이름 : ");
		scanf("%s", &(*ep)->name);
		printf("국어 : ");
		scanf("%d", &(*ep)->kor);
		printf("영어 : ");
		scanf("%d", &(*ep)->eng);
		printf("수학 : ");
		scanf("%d", &(*ep)->math);
		(*ep)->next = NULL;
		getchar();
		printf("계속? (y/n) ");
		scanf("%c", &an);
		if (an == 'y') continue;
		else break;
	}
}

void output(score **sp)
{
	score *cp = *sp;
	while (cp != NULL)
	{
		printf("학번\t이름\t국어\t영어\t수학\n");
		printf("%d\t%s\t%d\t%d\t%d\n", cp->code, cp->name, cp->kor, cp->eng, cp->math);

		cp = cp->next;
	}
	printf("\n\n");
}

void search(score **sp)
{
	score *cp = *sp;
	char st[10];
	printf("검색할 이름을 입력하시오 :");
	scanf("%s", &st);
	while (cp != NULL)
	{
		if (strcmp(st, cp->name) == 0) {
			printf("%d\t%s\t%d\t%d\t%d\n\n", cp->code, cp->name, cp->kor, cp->eng, cp->math); break;
		}
		cp = cp->next;
	}
}

void change(score **sp)
{
	char st[10];
	score *cp = *sp;
	printf("변경할 학생의 이름을 입력하시오 : ");
	scanf("%s", &st);

	while (cp != NULL)
	{
		if (strcmp(st, cp->name) == 0) {
			printf("%s의 변경할 정보를 입력하시오\n ", st);
			printf("학번 : ");
			scanf("%d", &cp->code);
			printf("이름 : ");
			scanf("%s", &cp->name);
			printf("국어 : ");
			scanf("%d", &cp->kor);
			printf("영어 : ");
			scanf("%d", &cp->eng);
			printf("수학 : ");
			scanf("%d", &cp->math);
		}
		cp = cp->next;
	}
}

void remove(score **sp)
{
	score *cp = *sp;
	score *bp = *sp;
	char st[10];
	printf("삭제할 학생의 이름을 입력하시오 :");
	scanf("%s", &st);
	while (cp != NULL)
	{
		if (strcmp(st, cp->name) == 0) {
			if (cp == *sp) {
				*sp = cp->next;
			}
			else {
				bp->next = cp->next;
				cp = bp->next;
				
			}
			break;
		}

		bp = cp;
		cp = cp->next;
	}
}

void insert(score **sp)
{
	score *cp = *sp;
	score *ap;
	char st[10];
	printf("누구 뒤에 새로운 정보를 삽입하시겠습니까?\n");
	printf("학생이름 : ");
	scanf("%s", &st);

	while (cp != NULL)
	{
		if (strcmp(st, cp->name) == 0) {
			ap = cp->next;
			cp->next = (score *)malloc(sizeof(score));
			cp = cp->next;
			cp->next = ap;
			
			printf("추가할 학생의 정보를 입력하시오 \n");
			printf("학번 : ");
			scanf("%d", &cp->code);
			printf("이름 : ");
			scanf("%s", &cp->name);
			printf("국어 : ");
			scanf("%d", &cp->kor);
			printf("영어 : ");
			scanf("%d", &cp->eng);
			printf("수학 : ");
			scanf("%d", &cp->math);
			break;
		}
		cp = cp->next;
	}
}

void sort(score **sp)
{
	score *cp = *sp;
	score **kp;
	score tmp;
	score *tp;
	int i = 0;
	while (cp != NULL)
	{
		i++;
		cp = cp->next;
	}
	kp = (score **)malloc(sizeof(score *)*i);
	cp = *sp;
	for (int k = 0; k < i; k++)
	{
		if (k == 0) kp[k] = cp;
		else {
			kp[k] = cp->next;
			cp = cp->next;
		}
	}
	cp = *sp;
	for (int c = 0; c < i-1; c++)
	{
		for (int k = 0; k < i-1-c; k++)
		{
			if (strcmp(kp[k]->name, kp[k + 1]->name) >0)
			{
				tmp = *kp[k];						
				*kp[k] = *kp[k + 1];				// 전체 노드 값을 통째로 바꿈 (*next 값 포함)
				*kp[k + 1]= tmp; 

				tp = kp[k]->next;
				kp[k]->next = kp[k + 1]->next;		// 주소값만(*next 만) 다시 바꿔줌  - 노드 연결 유지
				kp[k + 1]->next = tp;
			}
		}
	}
}

void main()
{
	int n;
	score *sp, *ep;
	sp = ep = NULL;
	for (;;)
	{
		printf("1.입력\t2.출력\t3.검색\t4.변경\t5.삭제\t6.삽입\t7.정렬\t8.종료\n");
		printf("==> 선택 ");
		scanf("%d", &n);

		if (n == 1) input(&sp,&ep);
		if (n == 2) output(&sp);
		if (n == 3) search(&sp);
		if (n == 4) change(&sp);
		if (n == 5) remove(&sp);
		if (n == 6) insert(&sp);
		if (n == 7) sort(&sp);
		if (n == 8) break;
	}
}
*/


/*
#include<stdio.h>
#include<stdlib.h>
typedef struct number {
	struct number *before;
	int data;
	struct number *next;
}num;


void main()
{
	int n;
	int input;
	printf("입력할 자료의 개수를 입력하시오 : ");
	scanf("%d", &n);
	
	num *cp, *sp, *ep;
	sp = ep = NULL;

	for (int i = 0; i < n; i++)
	{
		printf("%d번째 정수값 : ",i+1);
		scanf("%d", &input);
		if (sp == NULL)
		{
			sp = (num *)malloc(sizeof(num));
			ep = sp;
			ep->before = NULL;
		}
		else {
			ep->next = (num *)malloc(sizeof(num));
			ep->next->before = ep;
			ep = ep->next;
		}
		ep->data = input;
		ep->next = NULL;

	}


	cp = sp;

	while (cp != NULL)
	{
		printf("%d", cp->data);
		cp = cp->next;
	}
	printf("\n");

	cp = ep;

	while (cp != NULL)
	{
		printf("%d", cp->data);
		cp = cp->before;
	}


}

*/

/*
// 5페이지 7번 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct randomnum {
	int data;
	struct randomnum *next;
}random;

void main()
{
	srand(time(NULL));
	int r;
	int i = 0;
	int k = 0;
	random *sp, *ep, *cp;
	random *bp;
	sp = ep = NULL;

	for (int i = 0; i < 30; i++)
	{
		r = rand()% 100 + 1;

		if (sp == NULL)
		{
			sp = (random *)malloc(sizeof(random));
			ep = sp;
		}

		else {
			ep->next = (random *)malloc(sizeof(random));
			ep = ep->next;
		}
		ep->data = r;
		ep->next = NULL;

	}

	cp = sp;
	printf("=== 삭제 전\n");
	while (cp != NULL)
	{
		printf("%5d", cp->data);
		i++;
		cp = cp->next;
		if (i % 5 == 0) printf("\n");
	}

	i = 0;
	bp = sp;
	cp = sp;
	
	while (cp != NULL)
	{
		
		if (i % 2 != 0) {
										
			bp->next = cp->next;
		} 
		
		bp = cp;
		cp = cp->next;
		i++;

	}

	cp = sp;

	printf("\n\n=== 삭제 후\n");
	while (cp != NULL)
	{
		printf("%5d", cp->data);
		k++;
		cp = cp->next;
		if (k % 5 == 0) printf("\n");
	}

}

*/


/*
// 6페이지 8번

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct NODE{
	struct NODE *before;
	int data;
	struct NODE *next;
};

void main()
{
	srand(time(NULL));
	int n = 1;

	struct NODE *sp, *cp, *ep;
	struct NODE *bp;
	sp = ep =bp= NULL;
	for (int i = 0; i < 30; i++)
	{
		if (sp == NULL)
		{
			sp = (struct NODE *)malloc(sizeof(struct NODE));
			ep = sp;
			bp = sp;
			ep->before = NULL;
		}
		else {
			ep->next = (struct NODE *)malloc(sizeof(struct NODE));
			ep = ep->next;
			ep->before = bp;
			bp = ep;
		}
		ep->data = n;
		ep->next = NULL;
		n++;
	}


	printf("=== 정방향 출력\n");
	cp = sp;
	int k = 0;
	while (cp != NULL)
	{
		printf("%5d", cp->data);
		k++;
		if (k % 5 == 0) printf("\n");
		cp = cp->next;
	}
	printf("\n\n");

	printf("=== 역방향 출력\n");
	cp = ep;
	k = 0;
	while (cp != NULL)
	{
		printf("%5d", cp->data);
		k++;
		if (k % 5 == 0) printf("\n");
		cp = cp->before;
	}
	printf("\n\n");



	cp = sp;
	bp = sp;
	k = 0;
	while (cp != NULL)
	{
		if (k % 2 == 0)
		{
			if (k == 0) {
				sp = cp->next;
				cp->next->before = NULL;
			}
			else {
				bp->next = cp->next;
				cp->next->before = bp;

			}
		}
		bp = cp;
		cp = cp->next;
		k++;
	}

	printf("=== 홀수 번째 삭제 후 정방향 출력\n");
	cp = sp;
	k = 0;
	while (cp != NULL)
	{
		printf("%5d", cp->data);
		k++;
		if (k % 5 == 0) printf("\n");
		cp = cp->next;
	}
	printf("\n\n");

	printf("=== 홀수 번째 삭제 후 역방향 출력\n");
	cp = ep;
	k = 0;
	while (cp != NULL)
	{
		printf("%5d", cp->data);
		k++;
		if (k % 5 == 0) printf("\n");
		cp = cp->before;
	}
	printf("\n\n");

}
*/



/*
// 6페이지 9번


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct NODE {
	int key;
	struct NODE *next;
}sort;

void main()
{
	sort *sp, *ep, *cp;
	sp = ep = NULL;
	srand(time(NULL));
	int r;
	for (int i = 0; i < 100; i++)
	{
		r = rand() % 100 + 1;
		if (sp == NULL)
		{
			sp = (sort *)malloc(sizeof(sort));
			ep = sp;
		}
		else {
			ep->next = (sort *)malloc(sizeof(sort));
			ep = ep->next;
		}
		ep->key = r;
		ep->next = NULL;
	}

	printf("== 100개의 난수 리스트\n");
	cp = sp;
	while (cp != NULL)
	{
		printf("%5d", cp->key);
		cp = cp->next;
	}
	printf("\n\n");

	sort **kp;
	kp = (sort **)malloc(sizeof(sort *) * 100);
	cp = sp;
	for (int i = 0; i < 100; i++)
	{
		kp[i] = cp;
		cp = cp->next;
	}

	sort dp;
	sort *rp;

	for (int i = 0; i < 100; i++)
	{
		for (int k = 0; k < 99; k++)
		{
			if (kp[k]->key > kp[k + 1]->key)
			{
				dp = *kp[k];
				*kp[k]=*kp[k + 1];     // *이 붙는 이유는 그 배열이 갖고있는 주소가 가리키는 값을(참조값) 바꿔야 하기 때문. 이때 값은 그 주소의 노드 전체(sort 구조체)가 됨
				*kp[k + 1] = dp;

				rp = kp[k]->next;
				kp[k]->next = kp[k + 1]->next;
				kp[k + 1]->next = rp;
			}
		}
	}

	printf("== 리스트 정렬 후\n");
	cp = sp;
	while (cp != NULL)
	{
		printf("%5d", cp->key);
		cp = cp->next;
	}

}
*/






/*

// 6페이지 10번


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct NODE {
	struct NODE *before;
	int data;
	struct NODE *next;
}sort;

void main()
{
	sort *sp, *ep, *cp;
	sort *bp;
	sp = ep =bp= NULL;
	srand(time(NULL));
	int r;
	for (int i = 0; i < 100; i++)
	{
		r = rand() % 100 + 1;
		if (sp == NULL)
		{
			sp = (sort *)malloc(sizeof(sort));
			ep = sp;
			ep->before = NULL;
		}
		else {
			ep->next = (sort *)malloc(sizeof(sort));
			bp = ep;
			ep = ep->next;
			ep->before = bp;
		}
		ep->data = r;
		ep->next = NULL;

	}

	printf("== 100개의 난수 양방향 리스트\n");
	cp = sp;
	while (cp != NULL)
	{
		printf("%5d", cp->data);
		cp = cp->next;
	}

	sort **kp;
	kp = (sort **)malloc(sizeof(sort *) * 100);
	sort tmp;
	sort *xp;

	cp = sp;
	for (int i = 0; i < 100; i++)
	{
		kp[i] = cp;
		cp = cp->next;
	}

	for (int i = 0; i < 100; i++)
	{
		for (int k = 0; k < 99; k++)
		{
			if (kp[k]->data > kp[k + 1]->data) {

				tmp = *kp[k];
				*kp[k] = *kp[k + 1];				// 노드 전체 바꿈
				*kp[k + 1] = tmp;

				xp = kp[k]->next;
				kp[k]->next = kp[k + 1]->next;     // next값 다시 바꿔줌
				kp[k + 1]->next = xp;

				xp = kp[k]->before;
				kp[k]->before = kp[k + 1]->before;  // before값 다시 바꿔줌
				kp[k + 1]->before = xp;
			}
			
		}
	}


	printf("\n\n== 리스트 정렬 후\n");
	cp = ep;
	while (cp != NULL)
	{
		printf("%5d", cp->data);
		cp = cp->before;
	}

}

*/


/*
// 7페이지 12번       

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct person {
	struct person *before;
	char name[20];
	char tell[20];
	char birth[30]; // 2001/01/01
	struct person *next;

}student;

void add(student **sp, student **ep)
{
	student *bp = *ep;
	char n[20];
	char t[20];
	char b[20];
	printf("이름   : ");
	scanf("%s", n);
	printf("전화번호 : ");
	scanf("%s", t);
	printf("생일   : ");
	scanf("%s", b);

	if (*sp == NULL)
	{
		*sp = (student *)malloc(sizeof(student));
		*ep = *sp;
		(*ep)->before = NULL;
	}
	else
	{
		(*ep)->next = (student *)malloc(sizeof(student));
		*ep = (*ep)->next;
		(*ep)->before = bp;
	}
	bp = *ep;
	strcpy((*ep)->name, n);
	strcpy((*ep)->tell, t);
	strcpy((*ep)->birth, b);
	(*ep)->next = NULL;
}

void right(student **sp)    // 정방향 출력
{
	student *cp;
	cp = *sp;
	printf("%5s %5s %5s\n","이름", "전화번호" ,"생일");

	while (cp != NULL)
	{
		printf("%5s %5s %5s\n", cp->name, cp->tell, cp->birth);
		cp = cp->next;
	}
}

void reverse(student **ep)   // 양방향 출력
{
	student *cp;
	cp = *ep;
	printf("이름 전화번호 생일\n");

	while (cp != NULL)
	{
		printf(" %s %s %s\n", cp->name,cp->tell,cp->birth);
		cp = cp->before;
	}
}

void search(student **sp)
{
	student *cp;
	char n[20];
	printf("검색할 이름을 입력하시오 : ");
	scanf("%s", n);

	cp = *sp;
	while (cp != NULL)
	{
		if (strcmp(n, cp->name) == 0) {
			printf("\n%s의 전화번호 : %s\n", n, cp->tell);
			printf("%s의 생일 : %s\n\n", n, cp->birth);
			break;
		}
		cp = cp->next;
	}

}

void insert(student **sp)
{
	student *cp;
	student *tmp= (student *)malloc(sizeof(student));
	char ns[20];
	printf("누구 뒤에 새로운 정보를 삽입하시겠습니까?\n");
	printf("이름 : ");
	scanf("%s", ns);

	printf("새로운 학생의 정보를 입력하시오\n");
	char n[20];
	char t[20];
	char b[20];
	printf("이름   : ");
	scanf("%s", n);
	printf("전화번호 : ");
	scanf("%s", t);
	printf("생일   : ");
	scanf("%s", b);

	cp = *sp;
	while (cp != NULL)
	{
		if (strcmp(cp->name, ns) == 0) {
			strcpy(tmp->name, n);
			strcpy(tmp->tell, t);
			strcpy(tmp->birth, b);

			tmp->before = cp;
			tmp->next = cp->next;
			cp->next = tmp;
			tmp->next->before = tmp;

			break;

		}
		cp = cp->next;
	}

}

void remove(student **sp, student **ep)
{
	student *cp, *dp, *eep;
	char dname[30];
	printf("삭제할 학생 이름을 입력하시오 : ");
	scanf("%s", dname);

	cp = *sp;
	dp = *sp;
	while (cp != NULL)
	{
		
		if (strcmp(cp->name, dname) == 0) {

			if (cp == *sp) 
			{
				if (cp->next == NULL) {
					*sp = cp->next;
					*ep = *sp;
				}
				else {
					*sp = cp->next;
					cp->next->before = NULL;
				}
			}
			else if (cp->next == NULL)
			{
				dp->next = NULL;
				*ep = dp;
			}
			else {
				dp->next = cp->next;
				cp->next->before = cp->before;
			}
			
		}

		dp = cp;
		cp = cp->next;
	}
	

}

void sort(student **sp)
{
	student **tmp;
	student *cp;
	cp = *sp;
	int i = 0;
	while (cp != NULL)
	{
		i++;
		cp = cp->next;
	}
	tmp = (student **)malloc(sizeof(student *)*i);
	cp = *sp;

	for (int k = 0; k < i; k++)
	{
		tmp[k] = cp;
		cp = cp->next;
	}
	student dp;
	student *kp;

	for (int c = 0; c < i; c++)
	{
		for (int k = 0; k < i - 1; k++)
		{
			if (strcmp(tmp[k]->name, tmp[k + 1]->name) > 0)
			{
				dp = *tmp[k];
				*tmp[k] = *tmp[k + 1];
				*tmp[k + 1] = dp;


				kp = tmp[k]->next;
				tmp[k]->next = tmp[k + 1]->next;
				tmp[k + 1]->next = kp;

				kp = tmp[k]->before;
				tmp[k]->before = tmp[k + 1]->before;
				tmp[k + 1]->before = kp;

			}
		}
	}
	
}


void main()
{
	student *sp, *ep, *cp;
	sp = ep = NULL;
	int n;

	for (;;)
	{
		printf("1.추가\t2.정방향리스트\t3.역방향리스트\t4.검색(이름)\t5.삽입\t6.삭제\t7.정렬\t8.종료\n"); 
		printf("=> 선택 ");
		scanf("%d", &n);

		if (n == 8) { printf("종료되었습니다"); break; }

		if (n == 1) add(&sp,&ep);
		if (n == 2) right(&sp);
		if (n == 3) reverse(&ep);
		if (n == 4) search(&sp);
		if (n == 5) insert(&sp);
		if (n == 6) remove(&sp, &ep);
		if (n == 7) sort(&sp);
	}
}
*/




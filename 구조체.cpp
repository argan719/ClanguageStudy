
/*
#include<stdio.h>
#include<string.h>


struct Student {
	int no;
	char name[10];
	int k, e, m, tot;
	float av;
};

void main()
{
	struct Student st;

	st.no = 1;
	strcpy(st.name, "ȫ�浿");
	st. = 100;
	st.e = 90;
	st.m = 85;
	st.tot = st.k + st.e + st.m;
	st.av = st.tot / 3.0;

	printf("%d %s %d %d %d %d %.2f",st.no, st.name, st.k, st.e, st.m, st.tot, st.av);
}



#include<stdio.h>
#include<string.h>

struct Student {
	int no;
	char name[10];
	int k, e, m, tot;
	float av;
};

void main()
{
	struct Student st = { 1,"�̼���",70,80,90 };

	st.tot = st.k + st.e + st.m;
	st.av = st.tot / 3.0;

	printf("%d %s %d %d %d %d %.2f", st.no, st.name, st.k, st.e, st.m, st.tot, st.av);
}



#include<stdio.h>
#include<string.h>
struct Student {
	int no;
	char name[10];
	int k, e, m, tot;
	float av;
};

typedef struct Student Std;

void main()
{
	Std st1 = { 1,"�̼���",70,80,90 };
	st1.tot = st1.k + st1.e + st1.m;
	
	st1.av = st1.tot / 3.0;
	Std st2 = st1;
	printf("%d %s %d %d %d %d %.2f\n", st1.no, st1.name, st1.k, st1.e, st1.m, st1.tot, st1.av);
	printf("%d %s %d %d %d %d %.2f\n", st2.no, st2.name, st2.k, st2.e, st2.m, st2.tot, st2.av);

}

/*

#include<stdio.h>
struct KT {
	char name[10];
	int nai;
	double ki;
};

typedef struct KT Gu;

void disp(Gu M)
{
	printf("�̸�=%s\n", M.name);
	printf("����=%d\n", M.nai);
	printf("Ű=%.1f\n", M.ki);
}

void main()
{
	Gu dt1 = { "ȫ�浿",105,110.5 };
	Gu dt2 = { "������",20,55.5 };
	disp(dt1);
	printf("\n");
	disp(dt2);
}

*/

/*
#include<stdio.h>
#include<string.h>
struct KT {
	char name[10];
	int nai;
	double ki;
};

typedef struct KT Gu;

void disp(Gu M)
{
	printf("�̸�=%s\n", M.name);
	printf("����=%d\n", M.nai);
	printf("Ű=%.1f\n", M.ki);
}

Gu change(Gu M)
{
	Gu tmp;
	strcpy(tmp.name, M.name);
	tmp.ki = 100;
	tmp.nai = 130;
	return tmp;
}

void main()
{
	Gu dt1 = { "ȫ�浿",105,110.5 };
	disp(dt1);
	dt1 = change(dt1);
	printf("\n");
	disp(dt1);
}
*/


/*
#include<stdio.h>
struct food {
	char ch[100];
	int th;
};

void main()
{
	struct food Food_Array[3] = { {"hamburger",900},{"bulgogi",500},{"sushi",700} };
	int i;
	int tot = 0;
	for (i = 0; i < 3; i++)
	{
		 tot += Food_Array[i].th;

	}
	printf("��ü Į�θ��� %dĮ�θ� �Դϴ�", tot);
}
*/


/*
#include<stdio.h>					// 1��
struct Point {
	int x, y;
};

int equal(struct Point p1, struct Point p2)
{
	if (p1.x == p2.x && p1.y == p2.y) return(1);
	else return 0;
}

int main(void)
{
	struct Point p1 = { 1,2 };
	struct Point p2 = { 3,5 };
	int t=equal(p1, p2);

	if (t == 1) printf("�� ���� ��ġ�մϴ�");
	else printf("�� ���� ��ġ���� �ʽ��ϴ�");


}
*/



/*
#include<stdio.h>					// 2��
#include<math.h>
struct Point {
	int x, y;
};

struct Rectangle {

	struct Point a, b;
};

int square(struct Rectangle r)
{
	int tot = (r.b.y - r.a.y)*(r.b.x - r.a.x);
	return(tot);
}

void main()
{
	struct Rectangle r;
	r = { {2,2},{4,4} };
	printf("�簢���� ������ %d",square(r));

}
*/

/*
#include<stdio.h>				// 3��

struct Vector {
	double x;
	double y;
};

struct Vector Vector_add(struct Vector v1, struct Vector v2)
{
	struct Vector tot = { v1.x + v2.x, v1.y + v2.y };
	return(tot);

}

void Vector_print(struct Vector v3)
{
	printf("%.1f %.1f", v3.x, v3.y);
}

int main(void)
{
	struct Vector v1 = { 1.0,2.0 };
	struct Vector v2 = { 2.0,3.0 };
	struct Vector v3;
	v3 = Vector_add(v1, v2);
	Vector_print(v3);
}

*/






/*
// 12������ 6��

#include<stdio.h>
#include<string.h>
struct phone {
	char name[20];
	char home[20];
	char tell[20];
};

typedef struct phone ph;

void num1(int i, ph *M)
{
	printf("�̸� :");
	gets_s(M[i].name);
	printf("\n�� ��ȭ��ȣ :");
	gets_s(M[i].home);
	printf("\n�޴��� ��ȣ :");
	gets_s(M[i].tell);
}

void num2(int n, ph M[])
{
	
	for (int i = 0; i < n; i++)
	{
		printf("%s�� �� ��ȭ��ȣ : %s  �޴��� ��ȣ :  %s\n", M[i].name, M[i].home, M[i].tell);
	}

}

void num3(int n, ph *M)
{
	printf("�̸��� �Է��Ͻÿ� :");
	char uname[10];
	gets_s(uname);
	for (int i = 0; i < n; i++)
	{
		if (strcmp(M[i].name, uname) == 0) { printf("\n%s�� ��ȭ��ȣ : %s   �޴��� ��ȣ: %s\n", M[i].name, M[i].home, M[i].tell); }
	}
}

void main()
{
	ph M[50],a;
	int i = 0;
	
	for (;;)
	{

		printf("\n== �޴�\n");
		printf("1. ��ȭ��ȣ ���\n");
		printf("2. ��ȭ��ȣ ����Ʈ\n");
		printf("3. ��ȭ��ȣ �˻�\n");
		printf("4. ����\n");
		int n;
		scanf("%d", &n);
		printf("���� => %d\n", n);
			
		getchar();

		if (n == 1) {
		
			 num1(i, M); i++;
		}

		if (n == 2) num2(i,M);

		if (n == 3) num3(i,M);

		if (n == 4) break;
	}
}

*/



/*

// 7��
#include<stdio.h>
#include<string.h>
#define SIZE 200

struct Wc {
	char word[30];
	int count;
};

struct Wc simbol_table [SIZE];

void input(int n)
{
	char tx[30];
	int i;
	for (;;)
	{
		printf("�ܾ �Է��ϼ��� : ");
		gets_s(tx);
		if (strcmp(tx, "end") == 0) break;

		for (i = 0; i < n; i++)
		{
			if (strcmp(tx, simbol_table[i].word) == 0) { simbol_table[i].count += 1;  break; }

		}
		if(i==n){ strcpy(simbol_table[n].word, tx); simbol_table[n].count = 1; n++; }

	}

	for (int i = 0; i < n; i++)
	{
		printf("%s \t\t: %d\n", simbol_table[i].word, simbol_table[i].count);
	}


}

void main()
{
	strcpy(simbol_table[0].word, "apple");
	strcpy(simbol_table[1].word, "orange");
	strcpy(simbol_table[2].word, "grape");
	for (int i = 0; i < 3; i++)
	{
		simbol_table[i].count = 0;
	}
	int n = 3;

	input(n);

}

*/





/*

//8��

#include<stdio.h>							
#include<string.h>
struct sell {
	char name[20];
	int price;
	int num;
	int tot;
};

void regis(struct sell *M, int i, int *r) 
{
	char name[20];
	int p, n;
	int k;
	
	for (k = 0; k < i; k++)
	{
		int c;
		if (strcmp(M[k].name, name) == 0) {
			printf("2. ��ǰ�� ������ �Է��Ͻÿ�\n");
			scanf("%d", &p);
			printf("�Ǹż����� �Է��Ͻÿ�\n");
			scanf("%d", &c);
			M[k].num += c;
			int sum = p * c;
			M[k].tot += sum;
			M[k].price = M[k].tot / M[k].num;
			break;
		}
	}
	if (k == i) {
		printf("1. ��ǰ�̸��� �Է��Ͻÿ�\n");
		getchar();
		gets_s(name);
		strcpy(M[i].name, name);
		printf("2. ��ǰ�� ������ �Է��Ͻÿ�\n");
		scanf("%d", &M[i].price);
		getchar();
		printf("3. �Ǹż����� �Է��Ͻÿ�\n");
		scanf("%d", &M[i].num);
		getchar();
		M[i].tot = M[i].price*M[i].num;
	}
	
}

void total(struct sell *M, int i, int *r)
{
	int tot = 0;
	for (int k = 0; k <i; k++)
	{
		tot += M[k].tot;
	}

	printf("�� ������� %d�Դϴ�\n", tot);


}

void main()
{
	int n;
	int i = 0;
	int r[200];

	struct sell M[200];

	for (;;)
	{
		printf("== �޴�\n");
		printf("1. ��ǰ �Ǹ� ���\n");
		printf("2. �� �����\n");
		printf("3. ����\n");
		scanf("%d", &n);
		getchar();

		if (n == 1) {
			regis(M, i,r);  i++;
		}

		if (n == 2) {
			total(M, i,r);
		}

		if (n == 3) break;
	}
	
}
*/




/*
// 10��

#include<stdio.h>
#include<string.h>
struct student {
	int code;
	char name[20];
	float tall;
};

void print(struct student *M, int n)
{
	printf("\n\n�й�\t\t�̸�\t����\n");
	printf("==============================\n");
	for (int i = 0; i < n; i++)
	{
		printf("%3d     %s    %3.1f\n", M[i].code, M[i].name, M[i].tall);
	}
}

void main()
{
	int n;
	struct student M[10];
	printf("�� ���� �Է��Ͻðڽ��ϱ� ?");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("�й��� �Է��Ͻÿ� : ");
		scanf("%d", &M[i].code);
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", &M[i].name);
		printf("������ �Է��Ͻÿ� : ");
		scanf("%f", &M[i].tall);
	}
	print(M, n);
}

*/







/*
// 11�� & 12��

#include<stdio.h>
#include<string.h>
#include<conio.h>
struct student {
	int num;
	char name[20];
	char tell[30];
	int age;
};

void find(struct student *M)
{
	printf("\n�̵��� ���̰� 20 �̻� 30 ������ ������...\n\n");
	for (int i = 0; i < 5; i++)
	{
		if (20 <= M[i].age && M[i].age <= 30) printf("%s\n", M[i].name);
	}
}

void search(struct student *M)
{
	char name[20];
	int i;
	printf("�̸� : ");
	gets_s(name);
	for (i = 0; i < 5; i++)
	{
		if (strcmp(name, M[i].name) == 0) { printf("=> ��ȭ��ȣ : %s", M[i].tell); break; }
	}
	if (i == 5) printf("=> �ڷᰡ �������� �ʽ��ϴ�");


}


void main()
{
	struct student M[5]= { {1, "ȫ�浿","111-1111",45},{2,"������","222-2222",24},{3, "�̼���","333-3333", 56},
	{4,"������","444-4444",17},{5,"�̳���","555-5555",29} };

	for (int i = 0; i < 5; i++)
	{
		printf("%d  %s  %s  %d\n", M[i].num, M[i].name, M[i].tell, M[i].age);
	}
	find(M);

	printf("\n\n��ȭ��ȣ�� �˻��Ͻðڽ��ϱ� ??");
	printf("\n���͸� �����ÿ�...\n\n");
	_getche();
	search(M);

}
*/






/*

// 13��
#include<stdio.h>								// 13�� �̾ �ϱ� ( �� ����) 13������ ����ü ������ ������
#include<string.h>
struct list {
	char name[10];
	int left;
	int price1;
	int tot;
};


void input(struct list *M, int i)
{
	char name[20];
	int k;
	int p, n;
	printf("��ǰ���� �Է��Ͻÿ� : ");
	scanf("%s", &name);
	int ck = 1;
	for (k = 0; k <= i; k++)
	{
		if (strcmp(name, M[k].name) == 0) {
			printf("�ܰ� : ");
			scanf("%d", &p);
			printf("���� : ");
			scanf("%d", &n);
			M[k].left += n;
			M[k].tot += p * n;
			M[k].price1 = M[k].tot / M[k].left;
			ck = 0;
		}

	}
	
	if (ck) {
		strcpy(M[i].name, name);
		printf("�ܰ� : ");
		scanf("%d", &M[i].price1);
		printf("���� : ");
		scanf("%d", &M[i].left);
		M[i].tot = M[i].price1*M[i].left;
	}

}

void seller(struct list *M, int i)
{
	char name[20];
	int n;
	printf("��ǰ���� �Է��Ͻÿ� : ");
	gets_s(name);
	printf("���� : ");
	scanf("%d", &n);
	if (M[i].left < n) printf("����������!\n");
	else {
		for (int k = 0; k < i; k++)
		{
			if (strcmp(name, M[k].name) == 0)
			{
				M[k].left -= n;  
				M[k].tot = M[k].left*M[k].price1;
			}
		}
	}
}

void remove(struct list *M, int i)
{
	char name[20];
	printf("��ǰ���� �Է��Ͻÿ� : ");
	gets_s(name);
	for (int k = 0; k < i; k++)
	{
		if (strcmp(name, M[k].left) == 0) {
			if(M[k].left==0) 
		}
	}
	

}

void main()
{
	struct list M[50];
	int n;
	int i = 0;
	for (;;)
	{
		printf("==================\n");
		printf("1. �԰�\n");
		printf("2. �Ǹ�\n");
		printf("3. ǰ�����\n");
		printf("4. ��� ����Ʈ ���\n");
		printf("5. ǰ��˻�\n");
		printf("6. ���ݾ� �հ� ���\n");
		printf("7. ����\n");
		printf("==================\n");
		printf("���� => ");
		scanf("%d", &n);

		if (n == 1) {
			input(M, i); i++;
		}
		if (n == 2)
		{
			seller(M, i);
		}
		if (n == 3)
		{
			remove(M,i);
		}


	}
}

*/









/*
// 16 ������ 14�� & 15��

#include<stdio.h>

struct grade {
	int num;
	char name[10];
	int k, e, m;
	int tot, av, rank;
};



void tot(struct grade *ch)
{
	for (int i = 0; i < 5; i++)
	{
		ch[i].tot = ch[i].k + ch[i].e + ch[i].m;
		ch[i].av = ch[i].tot/3;
	}


	for (int i = 0; i < 5; i++)
	{
		int max = ch[i].av;
		ch[i].rank = 1;
		for (int k = 0; k < 5; k++)
		{
			if (max < ch[k].av) ch[i].rank++;
		}

	}
}

void print(struct grade *ch)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%3d %s %3d %3d %3d %3d %3d %3d\n", ch[i].num, ch[i].name, ch[i].k, ch[i].e, ch[i].m,
			ch[i].tot, ch[i].av, ch[i].rank);
	}
}

void print2(struct grade *ch)
{
	struct grade tmp;
	for (int i = 1; i < 5; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			if (ch[k + 1].rank < ch[k].rank) {
				tmp = ch[k];
				ch[k] = ch[k + 1];
				ch[k + 1] = tmp;
			}
		}
	}
	printf("\n\n\n\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%3d %s %3d %3d %3d %3d %3d %3d\n", ch[i].num, ch[i].name, ch[i].k, ch[i].e, ch[i].m,
			ch[i].tot, ch[i].av, ch[i].rank);
	}
}

void main()
{
	struct grade chart[5] = { { 1,"AAA",70,70,70 },{ 2,"BBB",100,100,100 },
	{ 3,"CCC",80,80,80 },{ 4,"DDD",60,60,60 },{ 5,"EEE",90,90,90} };

	tot(chart);
	print(chart);
	print2(chart);

}

*/


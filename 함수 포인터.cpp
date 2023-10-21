
/*
#include<stdio.h>
void KK1() { puts("야호"); }
void KK2() { puts("그래"); }
void main()
{
	void(*ap)();
	ap = KK1;
	ap();
}

*/


/*
#include<stdio.h>
int func(int n1, int n2)
{
	printf("%d %d\n", n1, n2);
	return (n1 + n2);
}

void main()
{
	int(*fp)(int, int);

	fp = func;
	printf("%x %x\n", fp, func);
	printf("%d %d\n", fp(3, 5), func(3, 5));
}



#include<stdio.h>
int KK1(int a, int b) { return(a + b); }
int KK2(double a, double b) {return(int)(a + b); }
void main()
{
	int(*ap)(int, int);
	int(*bp)(double, double);
	ap = KK1;
	bp = KK2;
	printf("%d\n", ap(10, 20));
	printf("%d\n", bp(10.5, 20.5));

}
*/



/*
#include<stdio.h>
typedef void(*fp1)();
void KK1() { puts("야호"); }
void KK2() { puts("그래"); }
void main()
{
	void(*ap[2])();
	ap[0] = KK1; ap[1] = KK2;
	ap[0]();
	ap[1]();
}



#include<stdio.h>
int KK1(int a, int b) { return(a - b); }
int KK2(int a, int b) { return(b - a); }
void main()
{
	int(*ap[2])(int, int);
	int a = 3, b= 5, c;
	ap[0] = KK1; ap[1] = KK2;
	c = a > b ? ap[0](a, b) : ap[1](a, b);
	printf("%d\n", c);
}
*/


/*
#include<stdio.h>// 3페이지 1번
int (int a, int b) {return(a + b);}
int 
*/


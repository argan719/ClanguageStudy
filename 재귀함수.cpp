/*
#include<stdio.h>
void DispNum(int a)
{
	if (a == 3) return;
	DispNum(a + 1);
	printf("%3d", a);
}

void main()
{
	DispNum(0);
}



#include<stdio.h>
void KK1(int N)
{
	if (N == 0) return;
	KK1(N - 1);
	printf("%3d", N);
}
void KK2(int a, int N)
{
	printf("%3d", a);
	if (a == N) return;
	KK2(a + 1, N);
	printf("%3d", a);
}
void main()
{
	KK1(3); printf("\n");
	KK2(1, 3); printf("\n");
}



#include<stdio.h>
void num(int n)
{
	if (n == 0) return;
	num(n-1);
	printf("%2d", n);
}
void main()
{
	num(7);
}



#include<stdio.h>
void num(int n)
{
	printf("%2d", n);
	if (n == 1) return;
	num(n - 1);
	
}
void main()
{
	num(5);
}



#include<stdio.h>
void star(int n)
{
	if (n == 10) return;
	printf("#");
	star(n +1);

}
void main()
{
	star(0);
}



#include<stdio.h>
void star(int n)
{
	if (n == 0) return;
	printf("#");
	star(n -1);
	
}
void main()
{
	int i;
	for (i = 1;i <= 5;i++)
	{
		star(10);
		printf("\n");
	}

}



#include<stdio.h>
void num(int n)
{
	if (n == 11) return;
	printf("%3d", n);
	num(n + 1);
}

void main()
{
	int i;
	for (i = 0;i < 5;i++)
	{
		num(1);
		printf("\n");
	}
	
}


#include<stdio.h>
void star(int i)
{
	int n = 1;
	printf("#");
	if (n==i) return;
	star(i - 1);

}
void main()
{
	int n;
	int i = 1;
	for (n = 0;n < 5;n++)
	{
		star(i + n);
		printf("\n");
	}
}



#include<stdio.h>
void star(int i)
{
	int n = 0;
	if (i == n)return;
	printf("#");
	star(i - 1);

}
void main()
{
	int i;
	for (i = 5;0<i;i--)
	{
		star(i);
		printf("\n");
	}
}
*/
/*
#include<stdio.h>
int Sum1(int N)
{
	if (N <= 1) return(N);
	else {
		return(N + Sum1(N - 1));
	}
}

void main()
{
	printf("%d\n", Sum1(3));
}


#include<stdio.h>
int Sum1(int N) { return (N <= 1 ? N : N + Sum1(N - 1)); }
int Sum(int a, int N) { return (N <= a ? a : N + Sum(a, N - 1)); }
int Pow(int a, int N) { return (N <= 1 ? a : a * Pow(a, N - 1)); }
int Fac(int N) { return(N <= 1 ? 1 : N * Fac(N - 1)); }
void main()
{
	printf("%d\n", Sum1(3));
	printf("%d\n", Sum(1,3));
	printf("%d\n", Pow(2,3));
	printf("%d\n", Fac(3));
}



#include<stdio.h>
void Disp1(int a, int b)
{
	if (a > b)return;
	printf("%3d", a); Disp1(a + 1, b);
}
void Disp2(int a, int b)
{
	if (a < b) return;
	printf("%3d", a); Disp2(a - 1, b);
}
void Disp(int a, int b)
{
	if (b > a) Disp1(a, b);
	else Disp2(a, b);
	printf("\n");
}
void main()
{
	int a, b;
	a = 1;b = 3;	Disp(a, b);   Disp(b, a);
}


#include<stdio.h>
#include<string.h>
char str[10];

char *getword(int n)
{
	switch (n % 10) {
	case 0: strcpy_s(str, "zero"); break;
	case 1: strcpy_s(str, "one"); break;
	case 2: strcpy_s(str, "two"); break;
	case 3: strcpy_s(str, "three"); break;
	case 4: strcpy_s(str, "four"); break;
	case 5: strcpy_s(str, "five"); break;
	case 6: strcpy_s(str, "six"); break;
	case 7: strcpy_s(str, "seven"); break;
	case 8: strcpy_s(str, "eight"); break;
	case 9: strcpy_s(str, "nine"); break;
	}
	return str;
}

void dispword(int n)
{
	if (n < 10) printf("%s", getword(n));
	else {
		dispword(n / 10);
		printf("%s", getword(n));
	}
}

void main()
{
	int n;
	printf("정수를입력 :");
	scanf_s("%d", &n);
	dispword(n);
}

*/
//
//#include<stdio.h>
//void sum(int n)
//{
//	int ssum = 0;
//	if (n == 11) { printf("=%d", ssum); return; }
//	printf("%d+", n); 
//	ssum += n;
//	sum(n + 1);
//	
//}
//void main()
//{
//	int n = 1;
//	sum(n);
//}

/*
#include<stdio.h>
int Sum1(int n);
void main()
{
	printf("%d\n", Sum1(3));
}
int Sum1(int n)
{
	if (n <= 1) return(n);
	else return(n + Sum1(n - 1));
}


#include<stdio.h>
int Sum(int a,int n);
void main()
{
	printf("%d\n", Sum(1, 3));
}
int Sum(int a, int n)
{
	if (n <= a) return(a);
	else return(n + Sum(a, n - 1));
}



#include<stdio.h>
int Pow(int a, int n);
void main()
{
	printf("%d\n", Pow(2, 3));
}

int Pow(int a, int n)
{
	if (n <= 1) return(a);
	else return(a*Pow(a, n - 1));
}



#include<stdio.h>
int Fac(int n);

void main()
{
	printf("%d\n", Fac(3));
}

int Fac(int n)
{
	if (n <= 1) return(1);
	else return(n*Fac(n - 1));
}


#include<stdio.h>
int sum(int n)
{
	printf("%d+", n);

	if (10<=n) { printf("\b"); return (n); }
	else return(n + sum(n + 1));
	
}
void main()
{
	printf("=%d", sum(1));
}


#include<stdio.h>
int Factorial(int n)
{
	if (n <= 1) return(n);
	else return(n*Factorial(n - 1));
}
int main(void)
{
	printf("1!=%d \n", Factorial(1));
	printf("2!=%d \n", Factorial(2));
	printf("3!=%d \n", Factorial(3));
	printf("4!=%d \n", Factorial(4));
	printf("9!=%d \n", Factorial(9));
	return 0;
}



#include<stdio.h>
int sum(int n1,int n2);
void main()
{
	int num1, num2;
	printf("첫번째수 입력 : ");
	scanf_s("%d", &num1);
	printf("두번째수 입력 : ");
	scanf_s("%d", &num2);

	printf("%d부터 %d까지의 합 = %d", num1, num2, sum(num1, num2));
}
int sum(int n1, int n2)
{
	
	if (n2<=n1) return(n1);
	else return(n1 + sum(n1+ 1,n2));
}



#include<stdio.h>
int mul(int n)
{
	if (n <= 1) return(n);
	else return(n*mul(n - 1));
}
void main()
{
	int n;
	printf("어디까지의 곱을 계산할까요 ? ");
	scanf_s("%d", &n);
	printf("1부터 %d까지의 곱은 %d",n, mul(n));
}




#include<stdio.h>
int Recursive(int num)                 
{
	int n = num;
	if (n <= 0) return(0); 
	if(n <= 1) return(1); 
	else {
		return(Recursive(n - 1) + Recursive(n - 2));
	}
	
}
int main(void)
{
	for (int i = 1; i <= 6; i++)
	{
		printf("%d ", Recursive(i));
	}
	return 0;
}


#include<stdio.h>
int BSearchRecur(int arr[], int l, int h, int target)
{

	int m = (l + h) / 2;


	if (arr[m] == target) {
		return(m);
	}

	if (l == h) {
		return(-1);
	}

	if (target > arr[m])
	{
		BSearchRecur(arr, m + 1, h, target);
	}
	else if (target < arr[m])
	{
		BSearchRecur(arr, l, m - 1, target);
	}
	
}
	
int main(void)
{
	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };
	int idx, target;

	printf("찾을값");
	scanf_s("%d", &target);
	idx = BSearchRecur(arr, 0, (sizeof(arr) / sizeof(arr[0]) -1),target);
	if (idx == -1)
		printf("탐색실패\n");
	else
		printf("타겟저장인덱스%d \n", idx);

	return 0;
}



#include<stdio.h>
int exponential(int num)
{
	if (num <=1) return(2*num);
	else return(2* exponential(num-1));

}

int main()
{
	int num;
	int value;
	printf("2의 몇승을 구할까요 ? : ");
	scanf_s("%d", &num);
	value = exponential(num);

	printf("%d", value);
}


#include<stdio.h>
void binary(int num)
{
	if (num < 2) { printf("%d", num); return; }
		binary(num/2);
		printf("%d", num%2);

}
int main()
{
	int num;
	printf("10진수 값 입력 :");
	scanf_s("%d", &num);
	binary(num);
}



#include<stdio.h>
void cut(int num)
{
	printf("%3d", num % 10);
	if (num/10==0) return;
	cut(num / 10);
	
}
int main()
{
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);
	cut(num);
}



#include<stdio.h>
void show_digit(int x)
{
	if (x<=0) return;
	show_digit(x / 10);
	printf("%3d", x % 10);
	
}
int main()
{
	int num;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);
	show_digit(num);
}



#include<stdio.h>
void main()
{
	int n;
	printf("n값을 입력하시오 : ");
	scanf_s("%d", &n);
	int i, k = 1;

	for (i = 2;i <= n;i++)
	{
		k = k * i;
	}
	printf("%d", k);
}



#include<stdio.h>
int sum(int n)
{
	if (n == 1) return 1;
	else return(n + sum(n - 1));

}

int main()
{
	int n;
	printf("n값을 입력하시오 : ");
	scanf_s("%d", &n);
	printf("%d",sum(n));
}



#include<stdio.h>
int recur(int n)
{
	int sum = 0;

	if (n == 1) return 1;
	else return(n*n*n+recur(n - 1));
	
	
}
int main()
{
	int n;
	printf("n값을 입력하시요 : ");
	scanf_s("%d", &n);
	printf("%d",recur(n));
}



#include<stdio.h>
#include<conio.h>
void apple()
{

	char ch = _getche();
	if (ch == 13) return;
	apple();
	printf("%c", ch);


}
int main()
{
	apple();
}



#include<stdio.h>
void odd(int a, int z)
{
	if (a % 2 != 0) printf("%3d", a);
	if (a == z) return;
	
	odd(a + 1,z);
}
int main()
{
	int a, z;
	printf("시작값 : ");
	scanf_s("%d", &a);
	printf("끝 값 : ");
	scanf_s("%d", &z);
	printf("\n\n");

	odd(a, z);
}
*/




/*
#include<Stdio.h>
int Factorial(int n)
{
	if (n == 0) return 1;
	else  n*Factorial(n - 1); 

}

int main(void)
{
	printf("1!=%d \n", Factorial(1));
	printf("2!=%d \n", Factorial(2));
	printf("3!=%d \n", Factorial(3));
	printf("4!=%d \n", Factorial(4));
	printf("9!=%d \n", Factorial(9));
	return 0;
}
*/



/*
#include<stdio.h>
int sum1(int N)
{
	if (N == 1) return(1);
	else return(N+ sum1(N - 1));
}

int sum(int n1, int n2)
{
	if (n2 == n1) return(n1);
	else return(n2 + sum(n1, n2 - 1));
}

int pow(int a, int N)
{
	if (N == 1) return(a);
	else return(a*pow(a, N - 1));
}

int fac(int N)
{
	if (N == 1) return(1);
	else return(N*fac(N - 1));
}
void main()
{
	printf("%d\n", sum1(3));
	printf("%d\n", sum(1, 3));
	printf("%d\n", pow(2, 3));
	printf("%d\n", fac(3));
}

*/


/*
#include<stdio.h>

void star(int n)
{
	printf("#");
	if (n == 1) return;
	star(n - 1);
}


void main()
{
	int cnt = 0;
	for(int i=9; i>=1; i-=2)
	{ 
		star(i);
		printf("\n");
		cnt++;
		for (int k = 0; k < cnt; k++)
		{
			printf("%c", 32);
		}

	}

}





#include<stdio.h>
int sum(int n)
{

	if (n == 0) return 0;
	printf("%d +", 10 - n +1);
	return(n + sum(n -1));
}
void main()
{
	printf("\b=%d",sum(10));

}

*/


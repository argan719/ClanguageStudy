
/*
#include<stdio.h>
int main(void)
{
	char str[50] = "I like C programming";
	printf("string: %s \n", str);
	str[8] = '\0'; // 9��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);
	str[6] = '\0'; //7��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);
	str[1] = '\0'; //2��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);
	return 0;
}


#include<stdio.h>
int main(void)
{
	int i = 0;
	int sum = 0;
	char s[50];
	printf("���ڿ� �Է�");
	gets_s(s);
	puts(s);

	while (s[i] != '\0')
	{
		sum++;
		i++;
	}
	printf("\n\n�Է��� ���ڴ� :%d�����Դϴ�",sum);
}

*//*
#include<stdio.h>
int main(void)
{
	int i;
	char s[50];
	printf("���ڿ� �Է� : ");
	gets_s(s);

	for (i = 0;s[i]!='\0';i++)
	{
		if (s[i] < s[i += 1])
		{
			char c = s[i += 1];
			s[i += 1] = s[i];
			s[i] = c;
		}
	}
	puts(s);
	
}
*/
/*
#include<stdio.h>
int main(void)
{
	int M[10] = { 5,2,8,4,7 };
	int i;
	printf("<<��Ʈ��>>\n");
	for (i = 0;i <= 4;i++)
	{
		printf("M[%d]=%d  ",i, M[i]);
	}
	int k;
	int u,c;
	int a = 0;
	for (k = 0;k <= 3;k++)
	{
		for (u = k + 1;u <= 4;u++)
		{
			if (M[k] < M[u]) {
				c = M[u];
				M[u] = M[k];
				M[k] = c;
			}
		}

	}
	puts("\n<<��Ʈ��>>\n");
	for (int q = 0;q < 5;q++)
	{
		printf("M[%d]=%d  ", q, M[q]);
	}

}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int r, k, a, c, u;
	int sum = 0;
	int M[1000];
	srand(time(NULL));

	int i;
	for (i = 0;i < 999;i++)
	{
		r = rand() % 999 + 1;

		M[i] = r;
	}
	
	for (k = 0;k <= 997;k++)
	{
		for (a = k + 1;a <= 998;a++)
		{
			if (M[k] < M[a]) {
				c = M[a];
				M[a] = M[k];
				M[k] = c;

			}
		}
	}

	for (u = 0;u < 999;u++)
	{
		printf("%4d", M[u]);
		sum += 1;
		if (sum %10==0) printf("\n");
	}

}


#include<stdio.h>
int main(void)
{
	int num[] = { 5,7,8,4,2 };
	int i, k, c, a;

	for (i = 1;i <= 4;i++)
	{
		for (k = 0;k <= 3;k++)
		{
			if (num[k] > num[k + 1]) {
				c = num[k + 1];
				num[k + 1] = num[k];
				num[k] = c;
			}
		}
	}
	printf("��Ʈ��� => ");
	for (a = 0;a < 5;a++)
	{
		printf("%3d", num[a]);
	}
}
*/
/*
#include<stdio.h>
int main(void)
{
	int M[] = { 57,65,88,40,90,78,33,70 };
	int i, k, a, q;
	int l, h, m;
	int num;

	for (i = 1;i <= 8;i++)
	{
		for (k = 0;k <= 6;k++)
		{
			if (M[k] > M[k + 1]) {
				a = M[k + 1];
				M[k + 1] = M[k];
				M[k] = a;
			}
		}
	}

	printf("������ : ");
	for (q = 0;q < 8;q++)
	{
		printf("%3d", M[q]);
	}
	printf("\nã���� : ");
	scanf_s("%d", &num);

	l = 0;
	h = 7;

	while (1) {
		m = (l + h) / 2;

		if (M[m] == num)
		{
			printf("%d ��°�� �ֽ��ϴ�  ", m);
			break;
		}
		if (l == h) {
			printf("���� �������� �ʽ��ϴ�");
			break;
		}
		if (M[m] > num) { h = m - 1; }
		else if (M[m] < num) { l = m + 1; }


	}




}
*/
/*
#include<stdio.h>
int main(void)
{
	int i, k, u;
	char s[30];
	printf("���ڿ� �Է�:  ");
	gets_s(s);

	printf("\n������  : ");

	for (i = 0;i <= 3;i++)
	{
		for (k = i + 1;k <= 4;k++)
		{
			if (s[k] > s[i]) {
				u = s[k];
				s[k] = s[i];
				s[i] = u;
			}
		}
	}
	puts(s);
	

}
*/
/*
#include<stdio.h>   
#include<string.h>
int main(void)
{
	int i, k;
	
	char num;
	char s[30];
	printf("���ڿ� : ");
	gets_s(s);
	printf("ã������ : ");
	num=getchar();
	puts(s);
	printf("%c", num);
	int n = strlen(s) - 1;
	
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == num)
		{
			printf("%c�� �տ��� %d ��° ",num, i+1);
			break;
		}
		i++;
	}
	
	int cnt = 0;

	for (i = n;0 <= i;i--)
	{
		cnt++;
		if (s[i] == num) break;
	}
	printf("�ڿ��� %d��°�Դϴ�", cnt);

}
*/
/*
#include<stdio.h>
#include<string.h>
int main(void)
{
	int i, k, u;
	char c;
	char s[30];
	printf("���ڿ� �Է� : ");
	gets_s(s);
	int n = strlen(s) - 1;
				
	printf("�������� ���ڿ� : ");

	i = 0;
		for (i=0;i<=n/2;i++)
		{	
			c = s[i];
			s[i] = s[n-i];
			s[n-i] = c;
			
		}
	puts(s);                                      
}
*/
/*
#include<stdio.h>
int main(void)
{
	int i, k;										
	char s[100];
	printf("���ڿ� �Է� : ");
	gets_s(s);
	k = 1;
	i = 0;

	while(s[i]!='\0')
	{
		if (s[i] ==32) k += 1;
		i++;
	}

	printf("�ܾ�� %d���Դϴ�", k);

}
*/
/*
#include<stdio.h>
int main(void)
{
	int i;
	char k;
	char s[20];
	printf("�ܾ��Է� : ");
	gets_s(s);

	
	k = s[0];
	i = 1;
	while(s[i]!='\0')
	{
		if (k < s[i]) k = s[i];
		i++;
	}

    printf("�ƽ�Ű�ڵ尪�� ���� ū ���ڴ� %c ",k);

}
*/
/*
#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[50];
	printf("���ڿ��� �Է� �ϼ��� : ");
	gets_s(s);
	int n = strlen(s) - 1;

	int i, k;
	int sum = 0;
	for (i = 97;i <= 122;i++)
	{
		for (k = 0;k <= n;k++)
		{
			if (s[k] == i)  sum++;
		}
		printf("%c = %d   ", i, sum);
		sum = 0;
	}

	
}
*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	int M[10];
	int i, k, u, r, q;
	int a, b, c;
	int g, h;
	int sum = 0;
	for (i = 0;i < 6;i++)
	{
		for (;;)
		{
			r = rand() % 9 + 1;

			for (k = 0;k < i;k++)
			{
				if (M[k] == r) break;
			}

			if (i == k) {
				M[i] = r; break;
			}
		}
	}
	printf("���ǹ�ȣ�� �������� : ");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("��ǻ�� ��÷��ȣ : ");

	for (q = 0;q < 6;q++)
	{
		printf("%3d ", M[q]);
	}
	
		for (h = 0;h < 6;h++)
		{
			if (a == M[h]) sum += 1;
			if (b == M[h]) sum += 1;
			if (c == M[h]) sum += 1;
		}
		if (sum == 3) printf("�����մϴ� 1�� ��÷!! ����� 10000000 �Դϴ�~~~");
		else if (sum == 2) printf("�����մϴ� 2�� ��÷!! ����� 5000000 �Դϴ�~~");
		else  printf("�������� ��");
	
	
}


#include<stdio.h>
int main(void)
{
	int i, k, u, c, q;
	int num;
	int M[100];
	for (i = 0;i <= 9;i++)
	{
		printf("���� �Է� : ");
		scanf_s("%d", &num);
		
			M[i] = num;
			for (k=i;k>0;k--)
			{
				if (M[k]<M[k-1]) {
					c = M[k];
					M[k] = M[k-1];
					M[k-1] = c;
				}

			}
			printf("=>");
		for (q = 0;q <= i;q++)
		{
			printf("%4d ", M[q]);
		}
		printf("\n");
		
	}
}



#include<stdio.h>
int main(void)
{
	char s[100];
	char c;
	int i;
	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(s);
	printf("���ڸ� �Է��ϼ��� : ");
	c = getchar();
	int sum = 0;

	for (i = 0;;i++)
	{
		if (s[i] == '\0') break;
		if (i == 0 && s[i] == c) sum++;
		if (s[i] == 32 && s[i + 1] == c) sum++;
	}

	printf("%c�� �����ϴ� �ܾ�� %d��  ", c, sum);
}



#include<stdio.h>
int main(void)
{
	char s[100];
	int i, k;
	printf("���ڿ��Է� : ");
	gets_s(s);
	int max = 0;
	int sum = 0;
	char max_A;

	for (k = 97;k <= 122;k++)
	{

		for (i = 0;;i++)
		{
			if (s[i] == '\0') break;
			if (k == s[i]) sum += 1;
		}

		if (max < sum) {
			max = sum; max_A = k;
		}
		sum = 0;
	}
	printf("���� ���� ���ڴ� %c�̰� %d�� ", max_A, max);
}


#include<stdio.h>
#include<string.h>
int main(void)                                
{
	int i, k;
	int n;
	char s[100];
	char m[100];
	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s);
	printf("ã�� ���ڿ� : ");
	gets_s(m);
	n = strlen(m);

	for (i = 0;;i++)
	{
		if (s[i] == '\0') break;
		if (s[i] == m[0] && s[i - 1]==32)
		{
			for (k = 0;k < n;k++,i++)
			{
				if (s[k] == '\0') break;
				if (s[i] != m[k]) break;
			}
			if (k == n) { printf("%s�� �����մϴ� ", m); break; }
		}

		
	}
}
*/
/*
#include<stdio.h>
int main(void)
{
	char s[100];
	int i;
	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s);

	printf("�Էµ����� : ");
	puts(s);

	int n1 = 0, n2 = 0;
	
	for (;;)
	{
		if (s[n2] != 32) {
			s[n1] = s[n2]; n2++;  n1++;
		}
		if (s[n2] == 32) n2++;
		if (s[n2] == '\0') { s[n1] = s[n2]; break; }
	}

	for (i = 0;;i++)
	{
		if (s[i] == '\0') break;
		if (65 <= s[i] && s[i] <= 90)  s[i] += 32;
		else if (97 <= s[i] && s[i] <= 122) s[i] -= 32;
	}
	
	printf("��µ����� : ");
	puts(s);

}

#include<stdio.h>
int main(void)
{
	char s[100];
	int a, b;
	
	printf("�������ڿ� : ");
	gets_s(s);

	printf("�� ��°���� �� ���ڸ� ������?");
	scanf_s("%d%d", &a, &b);
	
	int n1 = a;
	int n2 = a + b;

	for (;;)
	{
		if (s[n1] == '\0') break;
		s[n1] = s[n2]; n1++, n2++;
	}
	
	
		
	
	printf("������ : ");
	puts(s);

}

#include<stdio.h>
void main(void)
{
	int i, j;
	int arr1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
			printf("%d ", arr1[i][j]);
		//printf("\n");
	}
}


#include<stdio.h>
int main(void)
{
	int M[4][4] = { {1,2,3,},{4,5,6,},{7,8,9,},{0,} };

	int i, j, k, u;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			M[i][3] += M[i][j];
			M[3][i] += M[j][i];

		}
	
	}
	for (k = 0;k < 4;k++)
	{
		for (u = 0;u < 4;u++)
			printf("%4d", M[k][u]);
		printf("\n");
	}

}

*/
/*
#include<stdio.h>
int main(void)
{
	int M[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int i, j, k, u;
	int a, b;
	int c;

	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
			printf("%2d", M[i][j]);
		printf("\n");
	}

	printf("\n\n");

	for (k = 0;k < 3;k++)
	{
		for (u = 0;u < k;u++)
		{
			c = M[u][k];
			M[u][k] = M[k][u];
			M[k][u] = c;

		}
	}

	for (a = 0;a < 3;a++)
	{
		for (b = 0;b < 3;b++) {
			printf("%4d", M[a][b]);
		}
		printf("\n");
	}


}
*/
/*

#include<stdio.h>
int main(void)
{
	int M[5][5] = { 0, };
	int n = 0;
	int i, j, k, l;

	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 5;j++)
		{
			n += 1;
			M[i][j] = n;
		}
	}

	for (k = 0;k < 5;k++)
	{
		for (l = 0;l < 5;l++)
			printf("%4d", M[k][l]);
		printf("\n");
	}
}


#include<stdio.h>
int main(void)
{
	int M[5][5] = { 0, };
	int i, j, k, u;
	int n = 0;

	for (i = 0;i < 5;i++)
	{
		for (j = 0;j <= i;j++)
		{
			n += 1;
			M[i][j] = n;
		}
	}
	for (k = 0;k < 5;k++)
	{
		for (u = 0;u < 5;u++)
			printf("%3d", M[k][u]);
		printf("\n");
	}
}


#include<stdio.h>
int main(void)
{
	int M[5][5] = { 0, };
	int i, j, k, u;
	int n = 0;

	for (i = 0;i < 5;i++)
	{
		for (j = 4;4-i<=j;j--)
		{
			n += 1;
			M[i][j] = n;
		}
	}

	for (k = 0;k < 5;k++)
	{
		for (u = 0;u < 5;u++)
			printf("%3d", M[k][u]);
		printf("\n");
	}
}


#include<stdio.h>
int main(void)
{
	int M[3][6] = { {1,2,4,5,8,9,},{50,80,70,60,45,70 },{0,} };
	int a, b;
	int i, j;

	for (i = 0;i < 6;i++)
	{
		M[2][i] = 1;
		for (j = 0;j < 6;j++)
		{
			if (M[1][i]< M[1][j]) M[2][i]++;
		}
		
	}
	
	printf("     == ����ǥ ��� ==  \n");
	printf("��ȣ		����		���\n");

	for (b = 0;b < 6;b++)
	{
		for (a = 0;a < 3;a++)
		{
			printf("%d		", M[a][b]);
		}
		printf("\n");
	}


}
*/
/*
#include<stdio.h>
int main(void)
{
	int dab[] = { 1,2,3,4,1 };                                  // 6�� ����
	printf("�Էµ�����  ");
	int M[3][6];
	int S[3][8];
	int num;
	int sum = 0;
	int i, j, k, u, t,n,s;
	int a, b;

	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 6;j++)
		{
			scanf_s("%d", &num);
			M[i][j] = num;
		}
		printf("\n");
	}
	printf("\n\n");
	printf(" ��ȣ  1   2   3   4   5   ����   ����   �׷���\n");

	for (k = 0;k < 3;k++)
	{
		for (u = 0;u < 5;u++)
		{
			if (u == 0)
			{
				S[k][0] = M[k][0];
			}
			if (M[k][u + 1] == dab[u]) { S[k][u + 1] = 79; sum += 20; }
			if (M[k][u + 1] != dab[u]) { S[k][u + 1] = 88; }
		}
		S[k][6] = sum;
	}
	for (n = 0;n < 3;n++)
	{
		for (s = 0;s < 3;s++)
		{
			S[n][7] = 1;
			if (S[n][7] < S[s][7]) S[n][7]++;
		}
	}
	for (a = 0;a < 3;a++)
	{
		for (b = 0;b < 8;b++)
		{
			printf("%4c", S[a][b]);
		}
		printf("\n");
	}
}
*/


/*
#include<stdio.h>
#include<conio.h>
int main(void)
{
	char M[3][20];
	char s;
	int i, k, j;

	for (i = 0;i < 3;i++)
		//{
		//	for (k = 0;;k++) {
		//		s = _getche();
		//		
		//		if (s == 13) {
		//			M[i][k] = NULL; 
		//			break;
		//		}
		//		M[i][k] = s;
		//		//printf("%c", M[i][k]);
		M[i][0] = getchar();
		}
		puts(M[i]);
	}

	for(j=0;j<3;j++)
	{
		puts(M[j]);
	}
	
}
*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int M[6];
	int i, r, k;
	int a;
	srand(time(NULL));
	for (i = 0;i < 6;i++)
	{
		for (;;)
		{
			r = rand() % 61 + 0;

			for (k = 0;k < i;k++)
			{
				if (M[k] == r) break;
			}

			if (i == k) {
				M[i] = r; break;
			}
		}
	}

	for (a = 0;a < 6;a++)
	{
		printf("%4d", M[a]);
	}

}


#include<stdio.h>
void main()
{
	int M[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	printf("==�ʱⰪ==\n");
	int i, k, j, u;
	int a, b;

	for (i = 0;i < 3;i++)
	{
		for (k = 0;k < 3;k++)
		{
			printf("%3d", M[i][k]);
		}
		printf("\n");
	}

	for (a = 0;a < 3;a++)
	{
		for (b = 0;b <= a;b++)
		{
			int c = M[a][b];
			M[a][b] = M[b][a];
			M[b][a] = c;
		}
	}

	printf("\n==��ȯ��==\n");
	for (u = 0;u < 3;u++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%3d", M[u][j]);
		}
		printf("\n");
	}


}



#include<stdio.h>
void main()
{
	int M[5][5] = { 0, };
	int i, k, m, n;
	int a = 1;

	for (i = 4;0<=i;i--)
	{
		for (k=0;k<=i;k++)
		{
			M[k][i] = a;
		}
		printf("\n");
	}

	for (m = 0;m < 5;m++)
	{
		for (n = 0;n < 5;n++)
		{
			printf("%3d", M[m][n]);
		}
		printf("\n");
	}


}
*/
// 2,3���� �迭 ����Ʈ 1������ 

/*
#include<stdio.h>		//1��
void main()
{
	int M[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	int i, k;
	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d", M[i][k]);
		}
		printf("\n");
	}
}


#include<stdio.h>
void main()
{
	int M[4][4] = { {1,2,3},{4,5,6},{7,8,9}, };
	int i, k;
	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%d", M[i][k]);
		}
		printf("\n");
	}

}

#include<stdio.h>
void main()
{
	int M[4][4] = { {1,2,3},{4,5,6},{7,8,9}, };
	int i, k;

	for (i = 0; i < 3; i++)
	{
		printf("%d", M[i][0]);
		printf("\n");
	}
	
}


#include<stdio.h>
void main()
{
	int M[4][4] = { {1,2,3},{4,5,6},{7,8,9}, };
	int i, k;

	for (i = 0; i < 3; i++)
	{
		printf("%2d", M[1][i]);
	}
}

#include<stdio.h>
void main()
{
	int M[4][4] = { {1,2,3},{4,5,6},{7,8,9}, };
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%2d", M[0][i]);
	}
}

#include<stdio.h>
void main()
{
	int M[4][4] = { {1,2,3},{4,5,6},{7,8,9}, };
	int i, k;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k <= i; k++)
		{
			printf("%d", M[i][k]);
		}
		printf("\n");
	}
}


#include<stdio.h>
void main()
{
	int M[4][4] = { {1,2,3},{4,5,6},{7,8,9}, };
	int i, k;
	int sum = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%d", M[i][0]);
		printf("\n");
		sum += M[i][0];
	}
	printf("%d\n", sum);
}


#include<stdio.h>
void main()
{
	int M[4][4] = { {1,2,3},{4,5,6},{7,8,9}, };
	int i, k;

	for (i = 0; i < 4; i++)
	{
		printf("%d", M[i][i]);
		printf("\n");
	}
}

#include<stdio.h>
void main()
{
	int M[4][4] = { {1,2,3},{4,5,6},{7,8,9}, };
	int i, k;
	for (i = 0; i < 4; i++)
	{
		printf("%d", M[i][3 - i]);
		printf("\n");
	}
}



#include<stdio.h>		
void main()
{
	int M[4][4] = { {1,2,3},{4,5,6},{7,8,9},{0,} };
	int i, k;
	int a, b;
	int sum = 0;
	int sum2 = 0;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
		{
			sum += M[a][b];
			sum2 += M[b][a];
		}

			M[a][3] = sum;
			M[3][a] = sum2;
			sum = 0;
			sum2 = 0;
	}

	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d", M[i][k]);
		}

		printf("\n");
	}
}


#include<stdio.h>
void main()
{
	int M[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int i, k, j, u;
	int c;
	int a, b;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 3; k++)
		{
			printf("%3d", M[i][k]);
		}
		printf("\n");
	}
	printf("\n\n\n");

	for (j = 0; j < 3; j++)
	{
		for (u = 0; u <=j; u++)
		{
			c = M[j][u];
			M[j][u] = M[u][j];
			M[u][j] = c;
		}

	}

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
		{
			printf("%3d", M[a][b]);
		}
		printf("\n");
	}
}


#include<stdio.h>
void main()
{
	int dab[] = { 1,2,3,4,1 };
	int M[3][6] = { {1,1,1,4,1,1,},{2,1,1,2,4,1},{4,2,2,2,3,2} };
	int S[3][8];
	int i, k, u, t, d, q, n;
	int a, b;
	int sum = 0;

	printf("��ȣ 1  2  3  4  5 �������� �׷���\n");
	for (i = 0; i < 3; i++)
	{
		S[i][0] = M[i][0];
		for (k = 0; k < 5; k++)
		{
			if (dab[k] == M[i][k + 1]) {
				S[i][k + 1] = 79; sum += 20;
			}
			else S[i][k + 1] = 88;
		}
		S[i][6] = sum;
		sum = 0;
	}


	for (u = 0; u < 3; u++)
	{
		S[u][7] = 1;
		for (t = 0; t < 3; t++)
		{
			if (S[u][6] < S[t][6]) S[u][7]++;
		}

	}

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 8; b++)
		{
			printf("%3d", S[a][b]);
		}

		n = S[a][6] / 5;
		for (q = 0; q <n; q++)
		{
			printf("*");
		}
		printf("\n");

	}
	printf("\n");
}


#include<stdio.h>
#include<string.h>
void main()
{
	char M[][7] = { "BANANA","APPLE","PEAR","ORANGE" };
	int i, k, u, t;
	int a, b;
	char r[10];

	printf("SORT �� :");
	for (i = 0; i < 4; i++)
	{
		printf("%s  ", M[i]);
	}
	for (u = 0; u < 3; u++)
	{
		for (t = u + 1; t < 4; t++)
		{
			if (strcmp(M[u], M[t]) == 1)
			{
				strcpy_s(r, M[u]);
				strcpy_s(M[u], M[t]);
				strcpy_s(M[t], r);
			}

		}
	}

	printf("\nSORT ��:");
	for (a = 0; a< 4; a++)
	{
			printf("%s", M[a]);

	}

}
*/
//#include<stdio.h>
//void main()
//{
//	int M[] = { 5,1,3,4,2 };
//	int i, k;
//	int c;
//	int a;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (k = i + 1; k < 5; k++)
//		{
//			if (M[k] < M[i]) {
//				c = M[i];
//				M[i] = M[k];
//				M[k] = c;
//			}
//		}
//	}
//
//	for (a = 0; a < 5; a++)
//	{
//		printf("%2d", M[a]);
//	}
//}
	
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	char M[][10] = { "COMPUTER","NOTEBOOK","MOUSE","CLANGUAGE","CODING","JAVA","PYTHON" };
	char S[][10] = { "��ǻ��","��Ʈ��","���콺","C���","�ڵ�","�ڹ�","���̽�" };

	char r;
	char s[100];

	srand(time(NULL));

	r = rand() % 6 + 0;

	printf(" '%s' �ܾ��� ���縵�� �Է� �ϼ���: ", S[r]);
	gets_s(s);

	if (strcmp(s, M[r]) == 0) printf("=> �¾ҽ��ϴ�!!");
	else printf("=> Ʋ�Ƚ��ϴ� �Ф�");

}


#include<stdio.h.>
#include<stdlib.h>
#include<time.h>
void main()
{
	srand(time(NULL));
	int r, a, b, q;
	int i, k;
	int M[5][6];

	for (q = 0; q < 5; q++)
	{
		for (i = 0; i < 6; i++)
		{
			for (;;)
			{
				r = rand() % 60 + 0;
				for (k = 0; k < i; k++)
				{
					if (M[q][k] == r) break;
				}
				if (M[q][k] != r) {
					M[q][i] = r; break;
				}
			}

		}
	}
	
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 6; b++)
		{
			printf("%3d", M[a][b]);
		}
		printf("\n");
		
	}
}


#include<stdio.h>
void main()
{
	int M[20][20] = { 0, };
	int i, k, u;
	int r;
	int a = 65;
	int b, c;
	char s;
	int v;

	for (i = 0; i <=10; i++)
	{
		M[0][i] = i;
	}

	for (k = 1; k <= 10; k++)
	{
		M[k][0] = a;
		a++;
	
	}

	printf("==�޴�==\n");
	printf("1. �¼���Ȳ ���\n");
	printf("2. �¼�����\n");
	printf("3. ����\n");
	printf("=> ���� ");
	scanf_s("%d", &r);

	if (r == 1)
	{
		for (b = 0; b < 11; b++)
		{
			for (c = 0; c < 11; c++)
			{
				if (c == 0) printf("%c", M[b][c]);
				else printf("%2d", M[b][c]);
			}
			printf("\n");
		}
	}
	 
	if (r == 2)
	{
		printf("�¼���ȣ : ");
		scanf(" %c%d",&s,&v);
		printf("\n%c%d",s,v);

		int p = s - 64;
		if (M[p][v] == 1) printf("�Ф� �̹� ������ �Ǿ��ִ� �¼��Դϴ�");
		if (M[p][v] == 0) {
			M[p][v] = 1; printf("\n����Ϸ�");
		}
		
		else printf("�Ф� ���� �¼��Դϴ�");
	}
	
}


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void main()
{
	int a;
	printf("�����ο� : ");
	scanf("%d", &a);
	int i, k, u;
	int sum = 0;
	int as;
	int M[100];
	char N[50][10];
	int b, c, e, p;
	int t1, t2;

	for (i = 0; i < a; i++)
	{
		printf("%d�� �̸� : ",i+1);
		scanf("%s", &N[i]);
	
	}
	for (k = 0; k < a; k++)
	{
		printf("\n-- ���ǵ� ������ ���� --");
		printf("\n����� ��� �Ƿ��� �׽�Ʈ �ϼ���!!!\n");
		printf("%s�� ~ �׽�Ʈ�ϰڽ��ϴ�\nũ�� ��ȣ���� �Ͻð�\n�غ�Ǹ� ���͸� ��������...\n", N[k]);
		t1 = clock();

		for (u = 1; u <= 10; u++)
		{
			printf("[���� %d] : ", u);
			srand(time(NULL));
			int q = rand() % 9 + 1;
			int e = rand() % 9 + 1;
			printf("%d * %d =", q, e);
			scanf("%d", &as);
			int p = q * e;
			if (p == as) sum += 10;
			else printf("\n~~ Ʋ�Ƚ��ϴ�\n");
		}
		t2 = clock();
		int t = (double)(t2 - t1) / CLOCKS_PER_SEC;
		printf("\n%s �� ���� : %d�� (��  %d ��)\n", N[k], sum,t);

		M[k] = sum;
		sum = 0;
	}


	printf("\n\n�̸�	����\n--------------\n");
	for (b = 0; b < a; b++)
	{
		printf("%s \t %2d\n", N[b], M[b]);
	}
	printf("\n----------------\n");
	int max = M[0];
	for (c = 0; c < a; c++)
	{
		if (max < M[c]) {
			max = M[c]; p = c;
		}
	}
	printf("1�� \t %s", N[p]);

}
*/
//
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void main()
//{
//	srand(time(NULL));
//	int v;
//	int i, k;
//	int M[100][100];
//
//	for (i=0;i<=10;i++)
//	{
//		v = rand() % 99 + 0;
//		printf("[%d] ", v);
//		for (k=0;k<=i;k++)
//		{
//			M[i][k] = v;
//		}
//
//	}
//}
/*
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
	srand(time(NULL));
	int M[5][5];
	int i, k;
	int a, b;
	int v;
	int u, p, g;
	int t, y;

	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 5; k++)
		{
			v = rand() % 2 + 0;
			M[i][k] = v;
		}
	}

	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			printf("%2d", M[a][b]);
		}
		printf("\n");
	}

	int q, w, e, r;

	for (q = 0; q < 5; q++)
	{
		for (w = 0; w < 3; w++)
		{
			if (M[w][q] != M[w + 1][q]) break;
		}
		if (M[w][q] == M[w + 1][q]) printf("\n %d���� ��� �����ϴ�", q + 1);
	}

	for (e = 0; e < 5; e++)
	{
		for (r = 0; r < 3; r++)
		{
			if (M[e][r] != M[e][r + 1]) break;
		}
		if (M[e][r] == M[e][r + 1]) printf("\n %d���� ��� �����ϴ�", e + 1);
	}


	for (u = 0; u < 3; u++)
	{
		if (M[u][u] == M[u + 1][u + 1]) continue;
		else break;
	}
	if (M[u][u] == M[u + 1][u + 1]) printf("\n���� �밢���� ��� �����ϴ�");

	int n;

	for (p = 0, g = 4; 1 <= g; p++, g--)
	{
		 n = M[p][g];
		for (t = p, y = g; 1<= y; t++, y--)
		{
			if (n != M[t][y]) break;
		}
		if (n == M[t][y]) break;
		else break;
	}
	if(n==M[t][y]) printf("\n������ �밢���� ��� �����ϴ�");

}
*/
/*
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
	srand(time(NULL));
	int v;
	int M[100][100] = { 0 };
	int i, k;
	int a, b, c;
	int q, w;
	int cnt = 0;

	for (i = 0; i <= 10; i++)
	{
		v = rand() % 100 + 0;
		printf("[%3d] ���� :", v);
		for (k = 0; k < cnt; k++)
		{
			M[cnt][k] = M[cnt-1][k];
		}
		M[i][cnt] = v;

		for (a = cnt; a>0; a--)
		{
			if (M[i][a] > M[i][a - 1]) {
				c = M[i][a];
				M[i][a] = M[i][a - 1];
				M[i][a - 1] = c;
			}
		}

		for (w = 0; w < 5; w++)
		{
			printf(" %4d", M[i][w]);
		}
		printf("\n");
		cnt++;
	}

}
*/
/*
#include<stdio.h>
#include<time.h>							// 14�� �밢�� �̾ �ϱ�(�밢�� �ΰ� �ѹ���)
#include<stdlib.h>
void main()
{
	srand(time(NULL));
	int M[5][5];
	int i, k;
	int a, b, u, p;
	int v;
	int r, s;
	int cnt = 0;
	int cnt2 = 0;
	while (1)
	{


		for (i = 0; i < 5; i++)
		{
			for (k = 0; k < 5; k++)
			{
				v = rand() % 2 + 0;
				M[i][k] = v;
			}
		}
		for (a = 0; a < 5; a++)
		{
			for (b = 0; b < 5; b++)
			{
				printf("%2d", M[a][b]);
			}
			printf("\n");
		}

		for (u = 0; u < 5; u++)
		{
			cnt = cnt2 = 0;
			for (p = 0; p < 5; p++)
			{
				if (M[u][0] == M[u][p]) cnt++;
				if (M[0][u] == M[p][u]) cnt2++;
			}
			if (cnt == 5) printf("\n%d ���� ��� �����ϴ�", u + 1);
			if (cnt2 == 5) printf("\n%d ���� ��� �����ϴ�", u + 1);

		}

		cnt = cnt2 = 0;
		for (r = 0; r < 5; r++)
		{
			for (s = 4; 0 <= s; s--)
			{
				if (r == s && M[0][0] == M[r][s]) cnt++;
				if (4 - r == s && M[0][4] == M[r][s]) cnt2++;
			}
			if (cnt == 5) printf("\n���� �밢���� ��� �����ϴ�");
		}
		if (cnt2 == 5) printf("\n������ �밢���� ��� �����ϴ�");
		getchar();
	}
}

*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>					// ��ź ��Ʈ���� ����
void main()
{
	srand(time(NULL));
	int M[10][10];
	int x, y, t;
	int a, b;
	int i, k;
	int f, d;

	for (f = 0; f < 10; f++)
	{
		for (d = 0; d < 10; d++)
		{
			M[f][d] = 79;
		}
	}

	for (;;)
	{
		printf("== menu ==\n");
		printf("1. ��ź ������ (x,y ��ǥ ������ �߻�)\n");
		printf("2. �迭����\n");
		printf("3. ����\n");
		scanf("%d", &t);
		
		if (t == 1)
		{
			x = rand() % 10 + 0;
			y = rand() % 10 + 0;

			for (i = x - 1; i <= x + 1; i++)
			{
				for (k = y - 1; k <= y + 1; k++)
				{
					if(0<=i && i<=9 && 0<=k&&k<=9) M[i][k] = 88;
				}
			}

		}

		if (t == 2)
		{
			for (a = 0; a < 10; a++)
			{
				for (b = 0; b < 10; b++)
				{
					printf("%3c", M[a][b]);
				}
				printf("\n");
			}
		}

		if (t == 3) break;
	}
	
}
*/
/*
#include<stdio.h>		                 // 16�� 1)
void main()
{
	int M[5][5] = { 0, };
	int i, k;
	int a, b;
	int n = 1;

	for (i = 0; i < 5; i++)
	{
		for (k = 0; k<=i; k++)
		{
			M[k][i] = n;
			n++;
		}
	}

	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			printf("%3d", M[a][b]);
		}
		printf("\n");
	}
}
*/
/*
#include<stdio.h>						// 16�� ���̾Ƹ��1
void main()
{
	int M[5][5] = { 0, };
	int n = 1;
	int i, k;
	int a, b;
	int u, p;

	for (i = 0; i < 3; i++)
	{
		for (k = 2 - i; k <= 2 + i; k++)
		{
			M[i][k] = n;
			n++;
		}
	}

	for (u = 1; 0<=u; u--)
	{
		for (p =2-u; p<=2+u; p++)
		{
			int q = 4 - u;
			M[q][p] = n;
			n++;
		}
	}
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (M[a][b] == 0) printf("%3c",32);
			else printf("%3d", M[a][b]);
		}
		printf("\n");
	}
	
}


#include<stdio.h>					// 16�� ���̾Ƹ�� 2
void main()
{
	int M[5][5] = { 0, };
	int i, k;
	int q, v;
	int a, b;
	int n = 1;

	for (i = 4; 2 <= i; i--)
	{
		for (k = 6-i; i-2 <= k; k--)
		{
			M[k][i] = n;
			n++;
		}

	}
	for (q = 1; 0 <= q; q--)
	{
		for (v = q + 2; 2 - q <= v; v--)
		{
			M[v][q] = n;
			n++;
		}
	}

	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (M[a][b] == 0) printf("%3c", 32);
			else printf("%3d", M[a][b]);
		}
		printf("\n");
	}
}

*/



/*
#include<stdio.h>				// 18������ 1�� �̾ �� �� -  ��!!
void main()
{
	int M[2][4][5] = { {{1,2,4,5,8},{85,95,70,60,45},{90,100,55,87,70},{80,90,80,70,60}},{{1,2,4,5,8},{100,95,70,50,45},{
		90,100,60,90,80},{70,100,70,80,70}} };
	int i, k, m;
	int u, p, v, d;
	int a, b;
	int t, h, n, q;
	int g;
	int r[5][5] = { 0, };
	float sum = 0;
	int mys = 1;

	for (i = 0; i < 2; i++)
	{
		for (k = 0; k < 4; k++)
		{
			for (m = 0; m < 5; m++)
			{
				printf("%4d", M[i][k][m]);
			}
			printf("\n");
		}
		printf("\n");
	}

	printf("%34s\n\n","== ����ǥ ==");
	printf("  ��ȣ  �߰�����  �⸻����	�߰�+�⸻(���)	����	���\n");

	for (u = 0; u < 2; u++)
	{
		
		for (v = 0; v < 5; v++)
		{
			r[v][0] = M[0][0][v];

			for (p = 1; p <=3; p++)
			{
		
				r[v][u + 1] += M[u][p][v];   

			}

		}
	}

	for (t = 0; t < 5; t++)
	{
		for (h = 1; h < 3; h++)
		{
			sum += r[t][h];
		}
		r[t][h] = sum ;
		sum = 0;
	}

	for (n = 0; n < 5; n++)
	{
		for (q = 0; q < 5; q++)
		{
			if (r[n][3] < r[q][3]) mys++;
		}
		r[n][4] = mys;
		mys = 1;
	}



	for (a = 0; a < 5; a++)
	{
		printf(" %6d   %6d   %6d", r[a][0], r[a][1], r[a][2]);
		printf("\t  %.2f", r[a][3] / 6.0);
		switch ((r[a][3] / 6) / 10) {
		case 9: printf("\t   %6c", 'A'); break;
		case 8: printf("\t   %6c", 'B'); break;
		case 7: printf("\t   %6c", 'C'); break;
		case 6: printf("\t   %6c", 'D'); break;
		}
		printf("  %6d", r[a][4]);
		printf("\n");


	}
	
}
*/


/*
#include<stdio.h>
void main()
{
	int M[3][3][4];
	int n = 1;
	int i, k, m;
	int u, p, v;
	int a, b, c;

	for (i = 0; i < 2; i++)
	{
		for (k = 0; k < 3; k++)
		{
			for (m = 0; m < 4; m++)
			{
				M[i][k][m] = n;
				n++;
			}
		}
	}
	
		for (p = 0; p < 3; p++)
		{
			for (v = 0; v < 4; v++)
			{
				M[2][p][v] = M[0][p][v] + M[1][p][v];
			}
		}
	
		for (a = 0; a < 3; a++)
		{
			for (b = 0; b < 3; b++)
			{
				for (c = 0; c < 4; c++)
				{
					printf("%3d", M[a][b][c]);
				}
				printf("\n");
			}
			if (a == 0) printf("  '+'  \n");
			if(a==1) printf("  '='  \n");
		}
}
*/



	













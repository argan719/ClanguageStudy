int Mystrlen(char *s);
void Mystrreverse(char *s);
void MyStrcat(char *ap, char *bp);
void Mynospace(char *s);
char * myStrcpy(char *ap, char *bp);
void MyStrncpy(char *ap, const char *bp, int n);
void AbsoluteValue(int *ap);
int MyStrcmp(char *ap, char *bp);
int MyStricmp(char *ap, char *bp);
int MyStrincmp(char *m, char *s, int c);
void MyStrcpy(char *ap, char *bp);





int Mystrlen(char *s)
{
	int cnt = 0;
	while (*s != NULL)
	{
		cnt++;
		s++;
	}
	return(cnt);
}

void Mystrreverse(char *s)
{
	int a = Mystrlen(s);
	int i;
	char c;
	for (i = 0; i < a / 2; i++)
	{
		c = s[i];
		s[i] = s[a - 1 - i];
		s[a - 1 - i] = c;
	}

}

void MyStrcat(char *ap, char *bp)
{
	while (*ap != NULL)
	{
		ap++;
	}
	int i;
	for (i = 0;; i++)
	{
		ap[i] = bp[i];
		if (bp[i] == NULL) break;
	}
}

void Mynospace(char *s)
{
	int n1 = 0;
	int n2 = 0;
	for (;;)
	{
		if (s[n2] == NULL) { s[n1] = s[n2]; break; }
		if (s[n2] != 32) { s[n1] = s[n2]; n1++; n2++; }
		else n2++;
	}
}

char * myStrcpy(char *ap, const char *bp)
{
	int i;
	for (i = 0;; i++)
	{
		ap[i] = bp[i];
		if (bp[i] == NULL) break;
	}
	return(ap);
}


void MyStrcpy(char *ap, char *bp)
{
	int i;
	for (i = 0;; i++)
	{
		ap[i] = bp[i];
		if (bp[i] == NULL) break;
	}
	
}


void MyStrncpy(char *ap, const char *bp, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		ap[i] = bp[i];
	}
	ap[i] = NULL;
}

void AbsoluteValue(int *ap)
{
	if (*ap < 0) *ap -= (*ap * 2);
}

int MyStrcmp(char *ap, char *bp)
{
	int i;
	int n;
	for (i = 0;; i++)

	{
		if (ap[i] == NULL && bp[i] == NULL) { n = 0; break; }
		if (ap[i] > bp[i]) { n = 1; break; }
		if (ap[i] < bp[i]) { n = -1; break; }
	}
	return(n);

}

int MyStricmp(char *ap, char *bp)
{
	int i;
	while (*ap != NULL)
	{
		if (65 <= *ap && *ap <= 90) *ap += 32;
		ap++;
	}

	while (*bp != NULL)
	{
		if (65 <= *bp && *bp <= 90) *bp += 32;
		bp++;
	}

	for (i = 0;; i++)
	{
		if (ap[i] == NULL && bp[i] == NULL) return(0);
		if (ap[i] > bp[i]) return(1);
		if (ap[i] < bp[i]) return(-1);
		if (ap[i] == bp[i]) continue;
	}
}


int MyStrincmp(char *m, char *s, int c)
{
	int i;
	char a[100];
	char b[100];
	MyStrcpy(a, m);
	MyStrcpy(b, s);

	for (i = 0;; i++)
	{
		if (65 <= a[i] && a[i] <= 90) a[i] += 32;
		if (a[i] == NULL) break;

	}

	for (i = 0;; i++)
	{
		if (65 <= b[i] && b[i] <= 90) b[i] += 32;
		if (b[i] == NULL) break;

	}

	for (i = 0; i < c; i++)
	{
		if (a[i] < b[i]) return(-1);
		if (a[i] > b[i]) return(1);
	}
	return(0);


}
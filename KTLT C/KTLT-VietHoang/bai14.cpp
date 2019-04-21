
//chuong trinh tinh tich cua 2 ma tran
#include <stdio.h>
#include <stdlib.h>
void nhap(int *a,int m, int n)
{
	//m la so hang, n la so cot
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("nhap phan tu tai vi tri [%d][%d]",i,j);
			scanf("%d",(a+i*n+j));
		}
		printf("\n");
	}
}
void xuat(int *a,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\t%d",*(a+i*n+j));
		}
		printf("\n");
	}
}
void tich(int *a,int *b,int *c,int m,int n, int p)
{
	//c[m,p] = a[m,n]*b[n,p];
	//c[i,j]---a[i,k]*b[k,j];
	int i,j,k,s;
	for(i=0;i<m;i++)
	for(j=0;j<p;j++)
	{
		s=0;
		for(k=0;k<n;k++)
		{
		s=s+(*(a+i*n+k))*(*(b+k*p+j));
		}
		*(c+i*p+j)=s;
	}
}
int main()
{
	int m,n,p;
	int *a;int *b;int *c;
	
	printf("nhap so hang cho ma tran a: ");
	scanf("%d",&m);
	printf("nhap so cot cho ma tran a: ");
	scanf("%d",&n);
	printf("\n");
	printf("hang cua ma tran b bang so cot cua ma tran a roi!\n");
	printf("hang cua ma tran b = %d\n",n);
	printf("nhap so cot cua ma tran b: ");
	scanf("%d",&p);
	
	a=(int*)malloc(m*n*sizeof(int));
	b=(int*)malloc(n*p*sizeof(int));
	c=(int*)malloc(m*p*sizeof(int));
	printf("nhap cho ma tran a:\n");
	nhap(a,m,n);
	printf("nhap cho ma tran b:\n");
	nhap(b,n,p);
	printf("ma tran a la:\n");
	xuat(a,m,n);
	printf("ma tran b la:\n");
	xuat(b,n,p);
	
	tich(a,b,c,m,n,p);
	printf("tich cuaa 2 ma tran la:\n");
	xuat(c,m,p);
}

//chuong trinh tinh tong  2 ma tran <2 mang 2 chieu >
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
void tong(int *a, int *b,int *c, int m ,int n)
{
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		{
		*(c+i*n+j)=*(a+i*n+j)+*(b+i*n+j);
		}
}
int main()
{
	int m, n;
	int *a;int *b;int *c;
	
	printf("nhap so hang: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d",&n);
	
	a=(int*)malloc(m*n*sizeof(int));
	b=(int*)malloc(m*n*sizeof(int));
	c=(int*)malloc(m*n*sizeof(int));
	printf("nhap cho ma tran a:\n");
	nhap(a,m,n);
	printf("nhap cho ma tran b:\n");
	nhap(b,m,n);
	printf("ma tran a la:\n");
	xuat(a,m,n);
	printf("ma tran b la:\n");
	
	xuat(b,m,n);
	tong(a,b,c,m,n);
	printf("ma tran tong la:\n");
	xuat(c,m,n);	
}


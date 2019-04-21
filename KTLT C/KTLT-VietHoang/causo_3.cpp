//cau so 3 
// tim so lon nhat trong day
//chen so do vao truoc cac so chinh phuong
#include <stdio.h>
#include <stdlib.h>
//nhap xuat
void nhap(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap so thu %d: ",i+1);
		scanf("%d",a+i);
	}
}
void xuat(int *a, int n)
{
	for(int i=0;i<n;i++)
	printf("\t%d",*(a+i));
}
// kiem tra chinh phuong
int ktcp(int x)
{
	for(int i=1;i<x;i++)
	if(i*i==x)return 1;
	return 0;
}
int max(int *a, int n)
{
	int m=*a;
	for(int i=0;i<n;i++)
	if(*(a+i)>m)
	m=*(a+i);
	return m;
}
//chen 
void chen(int *a, int *n, int vt, int gt)
{
	for(int i=*n;i>vt;i--)
	*(a+i)=*(a+i-1);
	*(a+vt)=gt;
	(*n)++;
}
void chenmax(int *a, int *n)
{
	int m=max(a,*n);
	for(int i=0;i<*n;i++)
	{
		if(ktcp(*(a+i))==1)
		{
			chen(a,n,i,m);
			i++;
		}
	}
}
int main()
{
	int *a;
	int n; 
	printf("nhap so phan tu cua day: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	nhap(a,n);
	printf("\ncac so vua nhap la:\n");
	xuat(a,n);
	printf("\nso lon nhat trong day la:%d\n",max(a,n));
	printf("day sau khi chen la:\n");
	chenmax(a,&n);
	xuat(a,n);
}

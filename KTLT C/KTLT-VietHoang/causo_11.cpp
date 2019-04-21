//cau so 11
//sap xep sao cho dau day nguyen to tang dan
//cuoi day khong nguyen to giam dan
#include <stdio.h>
#include <stdlib.h>
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
int ktnt(int x)
{   int d=0;
	for(int i=1;i<=x;i++)
	if(x%i==0)d++;
	if(d==2)return 1;
	return 0;
}
void sapxep(int *a, int n)
{
	for(int i=0;i<n;i++)
	for(int j=n-1;j>i;j--)
	{
		if(((ktnt(*(a+i))==0)&&(ktnt(*(a+j))==1))
		||((ktnt(*(a+i))==1)&&(ktnt(*(a+j))==1)&&*(a+j)<*(a+i))
		||((ktnt(*(a+i))==0)&&(ktnt(*(a+j))==0)&&*(a+j)>*(a+i)))
		{
			int tg=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=tg;
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
	printf("\nday sau khi sap xep la:\n");
	sapxep(a,n);
	xuat(a,n);
}



//cp dau day tang,khong chinh phuong giam
#include<stdio.h>
#include<stdlib.h>
void nhapds(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nA[%d]=",i);
		scanf("%d",(a+i));
	}
}
void xuatds(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("\t%d",*(a+i));
}
int ktcp(int n)
{
	int i;
	for(i=0;i<n;i++)
	if(i*i==n)
	return 1;
	return 0;
}
void sapxep(int *a,int n)
{
	 int i,j;
	 for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	 if(ktcp(*(a+i))==0&&ktcp(*(a+j))==1||ktcp(*(a+i))==1
	 &&ktcp(*(a+j))==1&&*(a+i)>*(a+j)||ktcp(*(a+i))==0&&ktcp(*(a+j))==0&&*(a+i)<*(a+j))
	 {
	 	int tg;
	 	tg=*(a+i);
	 	*(a+i)=*(a+j);
	 	*(a+j)=tg;
	 }
}
main()
{
	int *a,n;
	printf("\nnhap n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\n                             NHAP DS                  \n");
	nhapds(a,n);
	printf("\n                             XUAT DS                \n");
	xuatds(a,n);
	printf("\n               CP DAU DAY TANG VA KHONG CP CUOI DAY GIAM     \n");
	sapxep(a,n);
	xuatds(a,n);
}

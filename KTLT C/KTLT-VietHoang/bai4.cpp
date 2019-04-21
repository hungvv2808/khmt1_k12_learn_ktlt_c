//bai4
//dem so nguyen to le
//tach 1 day chi chua nguyen to, mot day khong phai la nguyen to
#include<stdio.h>
#include<stdlib.h>
void nhapds(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",(a+i));
	}
}
void xuatds(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\t%d",*(a+i));
	}
}
int ktnt(int n)
{
	int i,dem=0;
	for(i=1;i<=n;i++)
	if(n%i==0)
	dem++;
	if(dem==2)
	return 1;
	return 0;
}
int demnt(int *a,int n)
{
	int i,dem=0;
	for(i=0;i<n;i++)
	if(ktnt( *(a+i))==1 && *(a+i)%2!=0 )
	dem++;
	return dem;
}
void tachds(int *a,int n,int *b,int *nb,int *c,int *nc)
{
	int i,i1=0,i2=0;
	for(i=0;i<n;i++)
	if(ktnt(*(a+i))==1)
	{
		*(b+i1)=*(a+i);
		i1++;
	}
	else
	{
		*(c+i2)=*(a+i);
		i2++;
	}
	*nb=i1;
	*nc=i2;
}
main()
{
	int n,*a,*b,*c,nb,nc;
	printf("\nnhap n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	c=(int*)malloc(n*sizeof(int));
	printf("\n                    nhapds                    \n");
	nhapds(a,n);
	printf("\n                    xuatds                     \n");
	xuatds(a,n);
	printf("\ncac so nguyen to le co trong day la:%d",demnt(a,n));
	printf("\n                    tachds                     \n");
	tachds(a,n,b,&nb,c,&nc);
	printf("\n                      dsnt                 \n");
	xuatds(b,nb);
	printf("\n                  ds khong phai nt                 \n");
	xuatds(c,nc);
	
}

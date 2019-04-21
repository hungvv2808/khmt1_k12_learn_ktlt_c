//tim am max sau do chen truoc cac so chan trong day
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
int ammax(int *a,int n)
{
	int i,dem=0,max;
	for(i=0;i<n;i++)
	if(*(a+i)<0)
	{
		max=*(a+i);
		dem++;
	}
	if(dem==0) return -1;
	else
	{
		for(i=0;i<n;i++)
		if(*(a+i)<0&&*(a+i)>max)
		{
			max=*(a+i);
		}
		return max;
	}
}
void chen(int *a,int *n,int vitrichen,int socanchen)
{
	int i;
	for(i=*n;i>vitrichen;i--)
	{
		*(a+i)=*(a+i-1);
	}
	*(a+vitrichen)=socanchen;
	(*n)++;
}
void chen(int *a,int *n)
{
	int i,m=ammax(a,*n);
	for(i=0;i<*n;i++)
	if(*(a+i)%2==0)
	{
	chen(a,n,i,m);
	i++;
	}
}
main()
{
	int n,*a;
	printf("\nnhap n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\n                    nhapds                    \n");
	nhapds(a,n);
	printf("\n                    xuatds                     \n");
	xuatds(a,n);
	printf("\n               chen am max vao truoc ca so chan trong day    \n");
	chen(a,&n);
	xuatds(a,n);
}

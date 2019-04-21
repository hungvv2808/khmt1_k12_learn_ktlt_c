//bai 2
// tim max cp va chen max cp vao truco cac so am
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
int ktcp(int n)
{
	int i;
	for(i=0;i<n;i++)
	if(i*i==n)
	{
		return 1;
	}
	return 0;
}
int maxcp(int *a,int n)
{
	int i,dem=0,max;
	for(i=0;i<n;i++)
	{
		if(ktcp(*(a+i))==1)
		{
			max=*(a+i);
			dem++;
		}
	}
	if(dem==0) return -1;
	else
	{
		int i;
		for(i=0;i<n;i++)
		if(ktcp(*(a+i))==1&&*(a+i)>max)
		{
			max=*(a+i);
		}
		return max;
		
	}
}
void chen(int *a,int *n,int socanchen,int vitrichen)
{
	int i;
	for(i=*n;i>vitrichen;i--)
	{
		*(a+i)=*(a+i-1);
	}
	*(a+vitrichen)=socanchen;
	(*n)++;
}
void chenmaxcp(int *a,int *n)
{
	int i,m=maxcp(a,*n);
	for(i=0;i<*n;i++)
	if(*(a+i)<0)
	{
		chen(a,n,m,i);
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
	printf("\n so cp max la    :%d",maxcp(a,n));
	printf("\n            chen max cp vao truoc so am         \n");
	chenmaxcp(a,&n);
	xuatds(a,n);
	printf("\n");
}  
      


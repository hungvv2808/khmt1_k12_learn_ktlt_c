//cau so 1!
//dem xem trong day co bao nhieu so nguyen to nho nhat
//xoa het so nguyen to trong day
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

int minnt(int *a, int n)
{	int m;
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(ktnt(*(a+i))==1)
		{
		m=*(a+i);
		d++;
		break;// co the su dung hoac khong
		}
	}
	if(d==0)
	return -1;//khong co so nguyen to nao
	else
	{
	for(int i=0;i<n;i++)
	if((ktnt(*(a+i))==1)&&*(a+i)<m)
	m=*(a+i);
	return m;
	}
}

int dem(int *a, int n)
{	int x=minnt(a,n);
	if(x==-1) return 0;
	else
	{
	int d=0;
	for(int i=0;i<n;i++)
	if(*(a+i)==x)d++;
	return d;
	}
}

void xoa(int *a, int *n, int vt)
{
	for(int i=vt;i<*n;i++)
	{
		*(a+i)=*(a+i+1);
	}
		(*n)--;
}

void xoant(int *a, int *n)
{
	if(dem(a,*n)==0)
	printf("day khong co so nguyen to de xoa!");
	else
	{
	for(int i=0;i<*n;i++)
	if((ktnt(*(a+i))==1))
	{
		xoa(a,n,i);
		i--;
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
	printf("\nco %d so nguyen to nho nhat\n",dem(a,n));
	//xoa het cac so nguyen to
	xoant(a,&n);
	printf("\nday sau khi xoa cac so nguyen to la: \n");
	xuat(a,n);
}

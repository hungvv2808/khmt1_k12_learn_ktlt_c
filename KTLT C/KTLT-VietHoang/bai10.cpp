//bai 10
//sx giam dan cua tuoi 
#include<stdio.h>
#include<stdlib.h>
typedef struct nhanvien
{
	char hoten[20];
	float namsinh;
	float tienluong;
};
void nhapds(nhanvien *a,int n)
{
	int i;
	float tg1,tg2;
	for(i=0;i<n;i++)
	{
		printf("\nnhap ten cua nhan vien thu %d:",i);
		fflush(stdin);
		gets((a+i)->hoten);
		
		printf("nhap nam sinh nhan vien thu %d:",i);
		scanf("%f",&tg1);
		(a+i)->namsinh=tg1;	
		
		printf("nhap tien luong cua nhan vien thu %d:",i);
		scanf("%f",&tg2);
		(a+i)->tienluong=tg2;	
    }
    printf("\n");
}
void xuatds(nhanvien *a,int n)
{
	int i;
	printf("\nSTT     HOTEN              namsinh           tienluong\n");
	for(i=0;i<n;i++)
	printf("\n%3d    %7s    %12.1f    %16.2f",i,(a+i)->hoten,(a+i)->namsinh,(a+i)->tienluong);	
}
void sx(nhanvien *a,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if((a+i)->namsinh>(a+j)->namsinh)
		{
			int tg;
			tg=(a+i)->namsinh;
			(a+i)->namsinh=(a+j)->namsinh;
			(a+j)->namsinh=tg;
		}
	}
}
main()
{
	int n;
	nhanvien *a;
	printf("\nnhap so phan tu nhan vien :");
	scanf("%d",&n);
	a=(nhanvien*)malloc(n*sizeof(nhanvien));
	printf("\n                  NHAP DS                 \n");
	nhapds(a,n);
	printf("\n                 XUAT DS                  \n");
	xuatds(a,n);
	printf("\n                 SAP XEP GIAM                  \n");
	sx(a,n);
	xuatds(a,n);
	
}

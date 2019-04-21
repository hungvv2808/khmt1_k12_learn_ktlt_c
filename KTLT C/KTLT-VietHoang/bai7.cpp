//bai7
//nhap ds sinh vien in ra hs co diem trung binh >=8
#include<stdio.h>
#include<stdlib.h>
typedef struct sinhvien
{
	char hoten[20];
	char lop[15];
	float diemtb;
};
void nhapds(sinhvien *a,int n)
{
	int i;
	float tg;
	for(i=0;i<n;i++)
	{
		printf("\nnhap ten cua sinh vien thu %d:",i);
		fflush(stdin);
		gets((a+i)->hoten);
		
		printf("nhap lop cua sinh vien thu %d:",i);
		fflush(stdin);
		gets((a+i)->lop);
		
		printf("nhap diem cua sinh vien thu %d:",i);
		scanf("%f",&tg);
		(a+i)->diemtb=tg;	
    }
    printf("\n");
}
void xuatds(sinhvien *a,int n)
{
	int i;
	printf("\nSTT     HOTEN              LOP           DIEMTB\n");
	for(i=0;i<n;i++)
	printf("\n%3d    %7s    %12s    %16.2f",i,(a+i)->hoten,(a+i)->lop,(a+i)->diemtb);	
}
void ds8(sinhvien *a,int n)
{
	int i;
	printf("\nSTT     HOTEN             LOP             DIEMTB\n");
	for(i=0;i<n;i++)
	if((a+i)->diemtb>=8)
	printf("\n%3d    %7s    %12s    %16.2f",i,(a+i)->hoten,(a+i)->lop,(a+i)->diemtb);		
}
main()
{
	int n;
	sinhvien *a;
	printf("\nnhap so phan tu sinh vien :");
	scanf("%d",&n);
	a=(sinhvien*)malloc(n*sizeof(sinhvien));
	printf("\n                  NHAP DS                 \n");
	nhapds(a,n);
	printf("\n                 XUAT DS                  \n");
	xuatds(a,n);
	printf("\n                 XUAT DS >=8                 \n");
	ds8(a,n);
	printf("\n");
}
	

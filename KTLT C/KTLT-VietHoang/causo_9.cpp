//cau so 9
//danh sach hang hoa gom ten hang, so luong , don gia
//tinh tong so tien tren danh sach hang hoa da nhap;
#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
	char tenhang[100];
	int soluong;
	int dongia;
}hanghoa;
void nhap(hanghoa *a,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("hang hoa thu %d\n",i+1);
	printf("nhap ten hang: ");fflush(stdin);gets((a+i)->tenhang);
	printf("nhap so luong: ");scanf("%d",&(a+i)->soluong);
	printf("nhap don gia: ");scanf("%d",&(a+i)->dongia);
	printf("\n");
	}

}
void xuat(hanghoa *a,int n)
{
	printf("STT   Ten hang   So luong   dongia\n");
	for(int i=0;i<n;i++)
	{
	printf("%3d %10s %6d %10d\n",i+1,(a+i)->tenhang,(a+i)->soluong,(a+i)->dongia);
	}
}
//tinh tong so tien
void tong(hanghoa *a,int n)
{
	int s=0;
	printf("\nSTT   Ten hang   So luong   dongia  Tongtien\n");
	for(int i=0;i<n;i++)
	{ 
	int x=((a+i)->soluong)*((a+i)->dongia);
	s=s+x;
	printf("%3d %10s %6d %10d %10d\n",i+1,(a+i)->tenhang,(a+i)->soluong,(a+i)->dongia,x);
	}
		printf("TongCong: %33d",s);
}
int main()
{
	hanghoa *a;
	int n;
	printf("nhap n:  ");scanf("%d",&n);
	a=(hanghoa*)malloc(n*sizeof(hanghoa));
	nhap(a,n);
	xuat(a,n);
 	tong(a,n);
}


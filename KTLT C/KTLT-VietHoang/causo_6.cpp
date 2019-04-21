//dem tung ki tu trong chuoi
#include<stdio.h>
#include <string.h>
 void xoakt (char *s, int k)
 {
 	for(int i=k;i<strlen(s);i++)
 	s[i]=s[i+1];
 }
 void dem(char *s)
 {
 	for(int i=0;i<strlen(s);i++)
 	{
 		int d=1;
 		for(int j=strlen(s)-1;j>i;j--)
 		{
 			if(s[j]==s[i])
 			{
 			  xoakt(s,j);
			  d++;	
			}
		}
		printf("ki tu %c xuat hien %d lan\n",s[i],d);
	}
 }
 int main()
 {
 	char s[100];
 	printf("nhap chuoi:  ");
 	gets(s);
 	dem(s);
 }

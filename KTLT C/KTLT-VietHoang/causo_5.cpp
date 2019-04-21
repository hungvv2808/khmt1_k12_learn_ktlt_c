#include<stdio.h>
#include <string.h>
//dem trong day co bao nhieu tu
 void xoakt (char *s, int k)
 {
 	for(int i=k;i<strlen(s);i++)
 	s[i]=s[i+1];
 }
 void chuanchuoi(char *s)
 {
 	int i;
 	//xoa neu 2 ki tu canh nhau bi sai
 	for(i=0;i<=strlen(s);i++)
 	if(((s[i]==' ')||(s[i]==',')||(s[i]=='.'))&&((s[i+1]==' ')||(s[i+1]==',')||(s[i+1]=='.')))
 	
 	{
 		xoakt(s,i);i--;
	 }
	 //xoa ki tu dau tien neu sai
	 i=0;
	 while((s[i]==' ')||(s[i]==',')||(s[i]=='.'))
	 {
	  xoakt(s,0);
	  i=0;
	 }
	 // xoa ki tu cuoi neu sai
	 i=strlen(s)-1;
	 while((s[i]==' ')||(s[i]==',')||(s[i]=='.'))
	 {
	 	xoakt(s,i);
	 	i=strlen(s)-1;
	 }

 }
 int demtu(char *s)
 {
 	int i, d=0;
 	for(int i=0;i<=strlen(s);i++)
 	if((s[i]==' ')||(s[i]==',')||(s[i]=='.')||s[i]=='\0')
 	d++;
 	return d;
 	
 }
 int main()
 {
 	char s[100];
 	printf("nhap chuoi:  ");
 	gets(s);
 	chuanchuoi(s);
 	printf("\n%s",s);
 	printf("\nchuoi co %d tu",demtu(s));
 	printf("\n");
 }

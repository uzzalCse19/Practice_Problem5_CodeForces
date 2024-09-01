#include<stdio.h>
int main()
{
int i=0,sum=0;
 char ch[1000000];
 scanf("%s",&ch);
 while(ch[i]!='\0')
 {
     sum+=ch[i]-48;
     i++;
 }
 printf("%d\n",sum);
}
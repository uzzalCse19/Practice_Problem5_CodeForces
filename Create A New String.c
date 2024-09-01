#include<stdio.h>
int main()
{
    int n=100000,x=0,y=0,i=0,j=0;
    char s[n];
    char s2[n];
    scanf("%s%s",&s,&s2);
    while(s[i]!='\0')
    {
        x++;
        i++;
    }
    while(s2[j]!='\0')
    {
        y++;
        j++;
    }

    printf("%d %d\n",x,y);
    printf("%s %s\n",s,s2);
}
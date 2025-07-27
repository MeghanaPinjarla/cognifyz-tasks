#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch[100],re[100];
    int len=0;
    printf("enter the string: ");
    scanf("%s",&ch);
    printf("the string is: %s\n",&ch);
    len= strlen(ch);
    for(int i=0;i<len;i++)
    {
        re[i]=ch[len-i-1];
    }
    re[len]='\0';
    printf("the reverse string is: %s\n",re);
    return 0;
}
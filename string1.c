#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,count=0;
    printf("enter the string\n");
    fgets(str,20,stdin);
    for(i=1;str[i]!='\0';++i)
    {
        count++;
    }
    printf("%d",count);
    printf("\n");
    return 0;
}
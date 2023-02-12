#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,count=0;
    printf("enter the string");
    fgets(str,20,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("string in upper case %s",str);
    printf("\n");
    return 0;
}
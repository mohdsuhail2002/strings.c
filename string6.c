#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],strrev[20];
    int i,temp,l;
    printf("enter a string\n");
    fgets(str,20,stdin);
    l=strlen(str);
    for(i=0;str[i];i++)
    {
        strrev[i]=str[l-i-1];
        
    }
    printf("%s",strrev);
    printf("\n");
    return 0;
}
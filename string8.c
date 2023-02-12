
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    char str2[50];
    int i;
    printf("\nenter the string you want to copy");
    fgets(str1,50,stdin);
    for(i=0;str1[i];i++)
    {
        str2[i]=str1[i];
    }
    printf("\n%s is the copied string",str2);
    printf("\n");
    return 0;
    
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,count=0;
    char c;
    printf("enter a string\n");
    fgets(str,50,stdin);
    printf("enter the character which you want to check frequency");
    scanf("%c",&c);
    for(i=0;str[i];i++)
    {
        if(str[i]==c)
        {
            count++;
        }
    }
    printf("%d",count);
    printf("\n");
    return 0;
    
    
}
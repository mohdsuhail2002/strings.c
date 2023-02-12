#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,c,count=0;
    printf("enter the string\n");
    fgets(str,20,stdin);
    printf("enter the character");
    scanf("%c",&c);
    for(i=0;str[i]!='\0';++i)
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
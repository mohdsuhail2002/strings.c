#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count=0,c=0,sc=0;
    printf("enter a string\n");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A'&& str[i]<='Z')
        {
            count++;
            
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            c++;
            
        }
        else
        {
            sc++;
        }
    }
    printf("\ntotal number of alphabets are %d",count);
    printf("\ntotal number of digits are %d",c);
    printf("\ntotal number of special character are %d",sc);
    printf("\n");
    return 0;
}
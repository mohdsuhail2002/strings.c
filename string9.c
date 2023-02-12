#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,k,temp,l;
    printf("enter a string you want to sort");
    fgets(str,50,stdin);
    l=strlen(str);
    for(i=0;i<l-1;i++)
    { 
        for(k=i+1;k<l;k++)
        {
        if(str[i]>str[k])
        { 
            temp=str[i];
            str[i]=str[k];
            str[k]=temp;
            
        }
        }
    }
    printf("%s is sorted string", str);
    printf("\n");
    return 0;
}
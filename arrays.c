//program to search liner number 
#include<stdio.h>
int main()
{
    int a[10],i,n,f=0;
    printf("enter array elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("the number you enter is avaiable:");
    }
    else
    {
        printf("the number you enter is not avaiable:");
    }
    return 0;
    
}
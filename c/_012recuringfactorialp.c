#include<stdio.h>
int fact(int n);

int main()
{
    int n;
    printf("enter number \n");
    scanf("%d",&n);
   // fact(n);
    printf("the factorial is  %d \n",fact(n));
    return 0;
}

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int factm1=fact(n-1);
    int factfinal= factm1*n;
    return factfinal;
}
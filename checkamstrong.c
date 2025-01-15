#include <stdio.h>
int main() 
{
    int n,r,s,t;
    printf("Enter a number :");
    scanf("%d",&n);
    t=n;
    s=0;
    while(t!=0) 
    {
        r=t%10;
        s+=r*r*r;
        t/=10;
    }
    if (s==n)
    {
        printf("the netred number %d is amstrong\n",n);
    }
    else
    {
        printf("the netred number %d is not amstrong\n",n);
    }
}



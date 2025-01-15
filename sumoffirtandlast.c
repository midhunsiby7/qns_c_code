#include<stdio.h>
int main()
{
    int n,l=0,s=0,r,t;
    printf("enter a number whose first digit is even :");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(l==0)
        {
            s+=r;
            l++;
        }
        if(n!=0)
        {
            continue;
        }
        if(n==0)
        {
            s+=r;
            if(r%2!=0)
            {
                printf("the first digit is not even");
                return 0;
            }
        }
    }
    printf("the sum of the first and last digits of the number %d is %d",t,s);
}
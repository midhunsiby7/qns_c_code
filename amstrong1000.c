#include <stdio.h>
int main() 
{
    int n,r,s,t;
    printf("Armstrong nbers between 1 and 1000 are:\n");
    for(n=1;n<=1000;n++)
    {
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
            printf("%d\n",n);
        }
    }
}


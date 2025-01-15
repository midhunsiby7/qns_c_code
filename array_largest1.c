#include<stdio.h>
int main()
{
    int i,a,b,n[6]={2,5,4,3,7,9},n1=6;
    a=n[0];
    printf("\n=================================\n");
    for(i=1;i<n1;i++)
    {
        b=n[i];
        if(b>a)
        {
            a=b;
        }
    }
    printf("highest number is %d",a);
    printf("\n=================================\n");
}
#include<stdio.h>
int main()
{
    int i,a,b,n1;
    printf("enter how many numbers");
    scanf("%d",&n1);
    printf("\n=================================\n");
    printf("enter %d numbers",n1);
    printf("\n=================================\n");
    int n[n1];
    for(i=0;i<n1;i++)
    {
        printf("enter any number :");
        scanf("%d",&n[i]);
    }
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
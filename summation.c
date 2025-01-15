#include<stdio.h>
int main()
{
    int i,j,n;
    float f=1,s=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        s=s+(i/f);
    }
    printf("Sum of series or the summations of the limit %f is %f\n",n,s);
}
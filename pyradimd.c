#include<stdio.h>
int main()
{
    int i,j,k=1,sp,r,n;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for(i=1;i<=r;i+=2)
    {
        k=1;
        sp=r-i;
        while(sp>0)
        {
            printf(" ");
            sp--;
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d",k);
            k++;
        }
        printf("\n");
    }
}
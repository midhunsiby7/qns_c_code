#include<stdio.h>
int main()
{
    int i,j,n=1,m,m1,i1=1;
    printf("enter the limit of number pattern lines :");
    scanf("%d",&m);
    m1=m;
    m*=2;
    for(i=1;i<=m;i+=2)
    {
        printf("\n");
        while(i1<=m1)
        {
            printf("       ");
            i1++;
        }
        i1=1;
        m1--;
        for(j=1;j<=i;j++)
        {
            printf("\t%d",n);
            n++;
        }
        printf("\n\n");
    }
}
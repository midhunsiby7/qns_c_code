#include<stdio.h>
int main()
{
    int i,j,n=1,m;
    printf("enter the limit of number pattern lines :");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("\n");
        n=1;
        for(j=1;j<=i;j++)
        {
            printf("\t%d",n);
            n++;
        }
        printf("\n\n");
    }
}
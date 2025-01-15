#include<stdio.h>
int main()
{
    int n,c,i,d,j,flag;
    printf("\nenter how many elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nenter element %d : ",i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("\nelemts are : ");
        for (i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    do
    {
        flag=0;
        printf("\nenter elemnt to delete : ");
        scanf("%d",&d);
        for (i=0;i<n;i++)
        {
            if (arr[i]==d)
            {
                flag=1;
                for (j=i;j<n;j++)
                {
                    arr[j]=arr[j+1];
                }
                n--;
                break;
            }
        }
        if (flag==0)
        {
            printf("\nelement not found\n");
        }
        printf("\nelemts are : ");
        for (i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n\npress 1 if you want to delete more : ");
        scanf("%d",&c);
    } while (c==1);
    
}
#include<stdio.h>
int main()
{
    int n,i,s,c=0;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter elemnt to search :");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            c+=1;
        }
    }
    if(c>0)
    {
        printf("elemnt %d has found %d times",s,c);
    }
    else{
        printf("elemnt not found");
    }
}
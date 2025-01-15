#include <stdio.h>
int main() 
{
    int num,i=2,isPrime=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<=1) 
    {
        isPrime=0;
    }
    while(i<=9) 
    {
        if(num!=i)
        {
            if(num%i==0)
            {
                isPrime=1;
                break;
            }
        }
        i++;
    }
    if (isPrime==0) 
    {
        printf("%d is a prime number.\n",num);
    }
    else
    {
        printf("%d is not a prime number.\n",num);
    }
}
#include <stdio.h>
int main() 
{
    int num=1,i=2,isPrime=0;
    while(num<=100)
    {
        isPrime=0;
        i=2;        
        while(i*i<=num) 
        {
            if(num!=i) 
            {
                if (num%i==0) 
                {
                    isPrime=1;
                    break;
                }
            }
            i++;
        }
        if (isPrime==0&&num>1)
        {
            printf("%d\n",num);
        }
        num++;
    }
    return 0;
}

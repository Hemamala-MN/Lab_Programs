#include<stdio.h>
int main()
{
    int n,temp,sum=0;
    printf("Enter the digit\n");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    printf("the sum is %d\n",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int i,n;
    i=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(i<=100)
    {
        printf("%d*%d=%d\t",n,i,(n*i));
        i++;
    }
    return 0;
}


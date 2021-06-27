#include<stdio.h>
int main()
{
    int i,m,n;
    printf("Enter any number\n");
    scanf("%d %d",&m,&n);
    i=m;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d is even\n",i);

        }
        i++;

    }
    return 0;
}

#include<stdio.h>
int calculate_min(int hrs,int min);
int main()
{
    int hrs,min,total_min;
    printf("enter the values of hours and minutes\n");
    scanf("%d %d",&hrs,&min);
    total_min=calculate_min(hrs,min);
    printf("the value is %d",total_min);
}
int calculate_min(int hrs,int min)
{
    int total;
    total=hrs*60+min;
    return total;
}



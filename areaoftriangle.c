#include<stdio.h>
#include<math.h>
float calculate_area(float a,float b,float c,float S);
int main()
{
    float a,b,c,area,S;
    printf("enter the values of a b and c\n");
    scanf("%f %f %f",&a,&b,&c);
    S=(a+b+c)/2;
    area=calculate_area(a,b,c,S);
    printf("the value of area is %f",area);

}
float calculate_area(float a,float b,float c,float S)
{
    float area;
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    return area;
}


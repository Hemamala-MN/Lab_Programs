#include <stdio.h>
#include <math.h>
void main()
{
    float x1,x2,y1,y2;
    float distance;
    printf("enter the values of first point \n");
    scanf("%f %f",&x1,&y1);
    printf("\n enter the values of second  point \n");
    scanf("%f %f",&x2,&y2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("the distance between 2 points is %f",distance);


}


#include<stdio.h>
int main()
{
    int marks[4][3],i,j,highest_marks;
    for(i=0;i<4;i++)
    {
        printf(" marks obtained by each student %d\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("\n marks[%d][%d]=",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        highest_marks=marks[0][j];
        for(i=1;i<4;i++)
        {
            if(marks[i][j]>highest_marks)
            {
                highest_marks=marks[i][j];
            }
        }
        printf("highest marks of subject %d is=%d\n",j+1,highest_marks);
    }
    return 0;
}

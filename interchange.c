#include<stdio.h>
void read_array(int array[],int);
void display_array(int array[],int);
void interchange(int array[],int);
int biggest_pos(int array[],int n);
int smallest_pos(int array[],int n);
int main()
{
    int array[10],n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    read_array(array,n);
    printf("the elements of an array are\n");
    display_array(array,n);
    interchange(array,n);
    printf("Elements after interchange are\n");
    display_array(array,n);
    return 0;

}
void read_array(int array[10],int n)
{
    int i;
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
}
void display_array(int array[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
}
void interchange(int array[10],int n)
{
    int temp,big_pos,small_pos;
    big_pos=biggest_pos(array,n);
    small_pos=smallest_pos(array,n);
    temp=array[big_pos];
    array[big_pos]=array[small_pos];
    array[small_pos]=temp;
}
int biggest_pos(int array[10],int n)
{
    int i,lar=array[0],pos=0;
    for(i=1;i<n;i++)
    {
        if(array[i]>lar)
        {
            lar=array[i];
            pos=i;
        }
    }
    return pos;
}
int smallest_pos(int array[10],int n)
{
    int i,small=array[0],pos=0;
    for(i=1;i<n;i++)
    {
        if(small>array[i])
        {
            small=array[i];
            pos=i;
        }
    }
    return pos;
}


#include <stdio.h>
#include <math.h>

    int main()
    {
        int a,b,c;
        float d,deno,root1,root2;
        printf("enter the values of a,b,c\n");
        scanf("%d %d %d",&a,&b,&c);
        d=(b*b)-(4*a*c);
        deno=2*a;
        if(d>0)
        {
            root1=(-b+sqrt(d))/deno;
            root2=(-b-sqrt(d))/deno;
            printf(" real roots root1 is %f and root2 is %f \n",root1,root2);

        }
        else if (d==0)
        {
            root1=(-b/deno);
            printf("equal roots root1 is %f and root2 is %f\n",root1,root1);


        }
        else
        {
            printf("imaginary roots\n");
        }



    }

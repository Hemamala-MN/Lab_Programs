#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    int i=0;
    printf("Enter string 1\n");
    scanf("%s",str1);
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("the string is %s\n",str2);
    printf("the length is %d\n",i);
    return 0;

}


#include<stdio.h>
int main()
{

    int number,result;

    printf("Enter given a number :");
    scanf("%d",&number);

    result = number % 2;

    if( result==0)
        printf("Number is even");
    else if(result!=0)
        printf("Number is odd");
        else
            printf("Number is not correct");

    getch();

}

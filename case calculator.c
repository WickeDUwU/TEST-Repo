#include<stdio.h>
int main()
{
    int x,y,sum,minus,s;
    printf("Welcome to +- compute\n");
    printf("1.Choose for Sum\n");
    printf("2.Chose for Minus\n");
    printf("Select an option : ");
     scanf("%d",&s);

    switch(s)
    {
    case 1:
        printf("WELCOME TO + Section\n");
        printf("Enter a number: ");
        scanf("%d",&x);

        printf("Enter a number: ");
        scanf("%d",&y);

        sum=x+y;
        printf("sum= %d",sum);
        break;

    case 2:
        printf("WELCOME TO - Section\n");
        printf("Enter a number: ");
        scanf("%d",&x);

        printf("Enter a number: ");
        scanf("%d",&y);

        minus=x-y;
        printf("Minus=%d",minus);
        break;

    default:
        printf("Syntax error");


    }

    return 0;
}

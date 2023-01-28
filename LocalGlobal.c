#include<stdio.h>

int X = 10;  //Global variable(Data)

void Demo()
{
    int B = 30;  //Loacl Variable(Stack)

    printf("Value of B from Demo : %d\n" ,B);
    printf("Value of X from Demo : %d\n",X);

    //printf("%d",A); //Not allowed
}

int main()
{
    int A = 20;    //Loacl Variable(Stack)

    printf("Value of A from main : %d\n" , A);
    printf("Value of X from main : %d\n" , X);

    //printf("%d",B); //Not allowed

    Demo();

    return 0;
}
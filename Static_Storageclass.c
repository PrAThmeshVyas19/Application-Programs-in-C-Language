#include<stdio.h>

void Demo()
{
    auto int A = 10;
    A++;  // Increment the value by 1 ;
    printf("Value From Demo Is : %d\n" , A);
}

void Hello()
{
    static int B = 10;
    B++; //Increment The value by 1 ;
    printf("Value From Hello  is : %d\n" ,B);
}
int main()
{
    Demo();
    Demo();
    Demo();
    
    Hello();
    Hello();
    Hello();

    return 0;
}
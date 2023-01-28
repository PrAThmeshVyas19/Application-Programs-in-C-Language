#include<stdio.h>

//Funcyion Defination
void Fun()
{
    printf("Inside fun\n");
}

int main()
{
    Fun();  ///Function Call

    void (*fptr)();  //Function Pointer
    // fptr is a pointer which
    // points to the function
    // that function accepts nothing
    // and that function returns nothing
    
    fptr = Fun;

    fptr();

    return 0;
}
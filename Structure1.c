#include<stdio.h>

//Structure Declaration;
//There is no memory allocation at this point 
struct Demo
{
    int i;     // 4
    float f;   // 4
    int j;     // 4
    double d;  // 8
};

int main()
{
    // Structure Object or Variable creation
    // Memory gets allocated at this point
    struct Demo obj1;  // 20bytes
    struct Demo obj2;  // 20bytes
    struct Demo obj3;  // 20bytes

    // Member initialisation
    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51;

    printf("Size of obj1 is :%d\n" , sizeof(obj1));
    printf("Size of obj2 is :%d\n" , sizeof(obj2));
    printf("Size of obj3 is :%d\n" , sizeof(obj3));
    printf("i of obj2 is :%d\n" , obj2.i);

    return 0 ;
}
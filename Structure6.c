#include<stdio.h>

//#pragma pack(1) to save memory loss (1 , 2 , 4 , 8 , 16 can be given in ())

struct Demo
{
    int i ;         //4
    char ch;        //1
    char dh;        //1    
    float f ;       //4
    float d;       // 4
};                  //17 bytes

int main()
{
    struct Demo dobj;

    printf("Size of the structure is :%d\n" , sizeof(dobj));

    return 0;
}
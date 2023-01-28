#include <stdio.h>

int Addition(int No1 , int No2)
{
    int value = 0;
    
    value = No1 + No2 ;

    return value ;
}

int main()
{
    int Ans = 0;

    Ans = Addition(12 , 15);

    printf("Answer is : %d\n" , Ans);
    
    return 0;
}
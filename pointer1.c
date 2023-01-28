#include <stdio.h>

int main()
{
    int no = 11;

    int *p = &no ;


    char ch = 'A' ;

    char *q = &ch ;

    printf("%d\n" , no);
    printf("%d\n" , p);
    printf("%d\n" , &no);
    printf("%d\n" , &p);
    printf("%d\n" , sizeof(no));
    printf("%d\n" , sizeof(p));
    printf("%c\n" , ch);
    printf("%d\n" , q);
    printf("%d\n" , &ch) ;
    printf("%d\n" , &q);

    return 0;
}
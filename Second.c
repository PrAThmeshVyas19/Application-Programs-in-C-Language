#include<stdio.h>

// Initialised global variable
int No1 = 11;

// Non initialised global variable
int No2;

// Initialised global variable
static int A = 10;

// Non initialised global variable
static int B;

// Function Defination
void Demo()
{
    int X =10;
    static int Y = 20;
    printf("Inside Demo\n");
}
#include <stdio.h>
//extern int m ;


int sum( int x , int y )
{
    return x+y ;
}
int sub( int x , int y )
{
    return x-y ;
}
int mul( int x , int y )
{
    return x*y ;
}
int Div( int x , int y )
{
    if (y==0)
        {
        printf("Error Can't Divide over 0");
        return -1;
        }
    return x/y ;
}

int Factorial (int x) // Implementation
{
    int result = x ;
    if (x == 1) return result;
    result = result * Factorial(x-1) ;
    /*for (x ; x >0 ; x--)
    {
        result = result * x ;
    }*/
}

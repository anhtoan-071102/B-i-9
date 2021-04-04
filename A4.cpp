#include <iostream>
using namespace std ;

int main()
{
    int* b = new int ;
    int a ;
    b = &a ;
    delete[] b ;
}

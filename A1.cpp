#include <iostream>
#include <cstring>
using namespace std ;


/*void concat(const char* a, const char* b)
{
    char* c =  new char[strlen(a) + strlen(b)] ;
    for (int i = 0 ; i < strlen(a) ; i ++)
    {
        c[i] = a[i] ;
    }
    for (int j = strlen(a) ; j < (strlen(a) + strlen(b)) ; j ++)
    {
        c[j] = b[j] ;
    }
    for (int i = 0 ; i < (strlen(a)+ strlen(b)) ; i++)
    {
        cout << c[i] ;
    }
}*/

int main()
{
    const char* a = "hello" ;
    const char* b = "worlda" ;
    char* c = new char ;
    int i = 0 , x = strlen(a) ;

    while (i < strlen(a) && x < strlen(a) + strlen(b))
    {
        c[i] = a[i] ;
        c[x] = b[i] ;
        i++;
        x++;
    }

    for (int j = 0 ; j < strlen(a) +  strlen(b) ; j++)
    {
        cout << c[j] ;
    }
}

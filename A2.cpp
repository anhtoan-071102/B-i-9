#include <iostream>
using namespace std ;

int main()
{
    int *p = new int ;
    int *p2 = p ;
    *p = 10 ;
    delete p ;
    *p2 = 100 ;
    delete p2 ;// p2 và p cùng trỏ 1 ô nhớ => giải phóng 2 lần 1 ô nhớ
    cout << *p2 ;
}

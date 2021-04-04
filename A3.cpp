#include <iostream>
using namespace std ;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // c không phải là 1 con trỏ được khai báo bằng new array => ko xác định (biến a mới là biến do người lập trình khởi tạo và nó mới được giải phóng)
    cerr << "a after deleting c:" << "-" << a << "-" << endl; // cerr ko  chạy như maong muốn.
}

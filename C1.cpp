#include <iostream>
using namespace std ;

int length(const char a[])
{
    int i = 0;
    while(a[i] != '\0')
    {
        i++ ;
    }
    return i ;
}

char strcat(const char a[] , const char b[])
{
    int La = length(a) ;
    int l = length(a) + length(b) ;
    char* c = new char[l];
    int d = 0 ;
    for (int i = 0 ; i < La ; i++)
    {
        c[i] = a[i] ;
        d++ ;
    }
    for (int j  = 0 ; j < length(b) ; j++)
    {
        c[d] = b[j] ;
        d++ ;
    }
    for ( int i = 0 ; i < l ; i++)
        cout << c[i] ;
}

void Reverse(char a[])
{
    int j = length(a)-1;
    for (int i = 0 ; i < float(length(a)/2) ; i++)
        {
            char c = a[i] ;
            a[i] = a[j] ;
            a[j] = c ;
            j-- ;
        }
}

void Delete(char a[], char c)
{
    int i = 0 ;
    int l = length(a);
    int La = l ;
    while(i < La)
    {
        if(a[0] == c){
            for (int j = 0 ; j < l ; j++)
            {
                a[j] = a[j+1] ;
            }
            l-- ;
        }
        i++ ;
    }
}

void right_pad(char a[],int n)
{
    int l = length(a)  ;
    if(l >= n)
        cout << "..." << endl;
    else {
            char b[n-l]  ;
            for (int i = 0 ; i < n-l ; i++)
                b[i] = ' ' ;
            strcat(a,b) ;
        }

}

void pad_left(char a[] , int n)
{
    int l = length(a) ;
    if (l >= n)
        cout <<"..." ;
    else{
        char b[n-l];
        for (int i = 0 ; i < n-l ;i++)
            b[i] =  ' ' ;
        strcat(b,a) ;
    }
}

void truncate (char a[] , int n)
{
    int l = length(a) ;
    char c[n] ;
    if (l <= n)
        cout << "..." ;
    else {
        for (int i = 0 ; i < n ; i++)
            c[i] = a[i] ;
        for ( int i = 0 ; i < n ; i++)
            cout << c[i] ;
    }
}

bool is_palindrome(char a[])
{
    int l = length(a)-1;
    for (int i = 0 ; i < length(a)/2 ;)
    {
        if(a[0] != a[l])
            return false ;
       else{
            i++;
            l--;
        }
        return true ;
    }
}

void trim_left (char a[])
{
    int i = 0;
    int l = length(a) ;
    int La = l ;
    while(i < La)
    {
        if (a[0] == ' '){
            for (int j = 0 ; j < l ; j++)
            {
                a[j] = a[j+1] ;
            }
            l-- ;
        }
        i++ ;
    }
}
int main()
{
    char a[] = "     c";
    //Reverse(a) ;
    //Delete(a,'a') ;
    //right_pad(a,5) ;
    //strcat(a,"aaa") ;
    //truncate(a,6) ;
    //cout << boolalpha << is_palindrome(a) ;
    trim_left(a) ;
    for (int i  =0 ; i < length(a) ; i++)
        cout << a[i] ;
}

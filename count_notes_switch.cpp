/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    
    switch(d)
    {
        case 100:cout<<"100 : "<<n/100;n = n%100;cout<<endl;;
        case 50:cout<<"50 : "<<n/50;n = n%50;cout<<endl;
        case 30:cout<<"30 : "<<n/30;n = n%30;cout<<endl;
        case 20:cout<<"20 : "<<n/20;n = n%20;cout<<endl;
        case 10:cout<<"10 : "<<n/10;n = n%10;cout<<endl;break;
        default:cout <<"IDK";
    }
    return 0;
}
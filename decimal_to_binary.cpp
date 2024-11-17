#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int digit;
    int answer=0;
    int i=0;
    cin>>n;

    while(n!=0)
    {
        digit = n&1;
        answer = (digit * pow(10,i)) +answer;
        i++;
        n=n>>1;
    }
    cout<<answer;
}
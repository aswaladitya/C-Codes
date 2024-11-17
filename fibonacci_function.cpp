# include <iostream>
using namespace std;


void fibonacci(int n)
{
    int count =0;
    int a=0;
    int b=1;
    int c=0;
    
    
    // 0 1 1 2 3 5 8
   cout <<0<<" "<<1<<" ";
    for(int i=0;i<5;i++)
    {
        c=a+b;
        cout <<c<<" ";
        a=b;
        b=c;
        count ++;
        if(i==n-3)
        {
            cout << n<<"rd number is: "<<c;
            break;
        }
    }
    
}


int main()
{
    fibonacci(3);
}
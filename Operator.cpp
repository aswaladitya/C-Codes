#include <iostream>
using namespace std;

class op
{
public:
    int a;

    // Overloading the function call operator as a member function
    void operator()()
    {
        cout << "Mai bracket hu: " << a << endl;
    }
};

// Overloading the + operator as a non-member function
int operator+(op &obj3, op &obj4)
{
    int value1 = obj3.a;
    int value2 = obj4.a;
    return value2 - value1;
}

int main()
{
    op obj1, obj2;
    obj1.a = 4;
    obj2.a = 6;

    // Using the overloaded + operator
    cout << obj1 + obj2 << endl;

    // Using the overloaded function call operator
    obj1();
    return 0;
}

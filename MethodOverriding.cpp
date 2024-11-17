# include <iostream>
using namespace std;

class human
{
    public:
        void speak()
        {
            cout<<"spanking"<<endl;
        }
};

class dog : public human
{
    public:
        void speak()
        {
            cout<<"I bark i dont speak"<<endl;
        }
};

int main()
{
    dog d1;
    d1.speak();
}
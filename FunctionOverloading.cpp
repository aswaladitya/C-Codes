# include <iostream>
using namespace std;


class plants
{
    public:
        void sun()
        {
            cout<<"Photosynthesis"<<endl;
        }
};


class greengas
{
    public:
        void sun()
        {
            cout<<"Global Warming"<<endl;
        }
};


class polymor : public plants,public greengas
{
    public:
        
};


int main()
{
    polymor p1;
    cout<<p1.plants::sun();
    
}
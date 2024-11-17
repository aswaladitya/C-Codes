# include <iostream>
using namespace std;


void duplicate(int arr[],int size)
{
    int ans;
    
    for(int i=0;i<size;i++)
    {
        ans =ans^arr[i];
    }
    
    for(int i=1;i<size;i++)
    {
        ans = ans^i;
    }
    
    cout<<ans;
}






int main()
{
    int arr[5]={1,2,3,4,2};
    duplicate(arr,5);
}
# include <iostream>
using namespace std;



void reverse(int arr[], int size)
{
    int s=0;
    int e=size-1;
    
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}




void swapalt(int arr[],int size)
{
    int s =0;
    int e=1;
    
    for(int i=0;i<size/2;i++)
    {
        swap(arr[s],arr[e]);
        s=s+2;
        e=e+2;
    }
}




void print(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout <<arr[i]<<" ";
    }
}




int main()
{
    int arr[6]={1,3,5,7,9,11};
    int brr[5]={2,4,6,8,0};
    
    reverse(arr,6);
    reverse(brr,5);
    
    
    cout <<endl<< "Print"<<endl;
    print(arr,6);
    cout<<endl;
    print(brr,5);
    
    
    swapalt(arr,6);
    swapalt(brr,5);
    
    
    cout <<endl << "Print"<<endl;
    print(arr,6);
    cout<<endl;
    print(brr,5);
    
}
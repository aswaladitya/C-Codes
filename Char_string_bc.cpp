# include <iostream>

using namespace std;



// char str_print(char arr[])
// {
//     char c;
//     for(int i=0;i<='\0';i++)
//     {
//         c= c+ arr[i];
//     }
//     return c;
// }



char chr_to_lowercase(char a)
{
    if(a >='a' && a<='z')
    {
        
    }
    
    else if(a >='A' && a<='Z')
    {
        a = char(a + 32);
    }
    return a;
}


int str_len(char arr[])
{
    int count=0;
    int i=0;
    while(arr[i]!='\0')
    {
        count ++;
        i++;
    }
    return count;
}


void rev_str(char arr[])
{
    int s=0;
    int e=str_len(arr)-1;
    
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}



bool str_is_palindrome(char arr[])
{
    int s=0;
    int e=str_len(arr)-1;
    
    while(s<=e)
    {
        arr[s]=chr_to_lowercase(arr[s]);
        arr[e]=chr_to_lowercase(arr[e]);
        
        if(!(arr[s]>='a' && arr[s]<='z'))
        {
            s++;
            continue;
        }
        if(!(arr[e]>='a'  && arr[e]<='z'))
        {
            e--;
            continue;
        }
        
        if((arr[s])!=(arr[e]))
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}




int main()
{
    char name[20];
    
    cout<<"Enter your name: "<<endl;
    cin>>name;
    
    cout<<endl;
    
    cout<<"Length of your name is: "<<str_len(name)<<endl;
    
    cout<<endl;
     
    cout<<"Reverse name is: ";
    rev_str(name);
    
    cout<<name;
    
    cout <<endl;
    cout <<endl;
    
    if(str_is_palindrome(name))
    {
        cout<<"Yes is palindrome.";
    }
    else cout<<"Not a palindrome";
    
    
    cout<<endl;
    cout<<endl;
    
    cout<<"Conversion: "<<chr_to_lowercase('A');
    
    
    
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    int a=0,b=1;

    cout<<"Enter the length of Fibonacci Series: ";
    cin>>n; 
    
    for(int i=0;i<n;i++) 
    {
        cout<<a<<" "<<endl;
        int next=a+b;
        a=b;
        b=next;
    }
    return 0;

}

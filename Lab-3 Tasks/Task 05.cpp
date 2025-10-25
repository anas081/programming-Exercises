#include<iostream>
using namespace std;
int main()
{
    char going;
    cout<<"Are your friends going? (Press Y for Yes)";
    cin>>going;
    if(going=='y')
    {
        cout<<endl<<"You are going";
    }
    else
    cout<<endl<<"You are not going";

    return 0;
} 

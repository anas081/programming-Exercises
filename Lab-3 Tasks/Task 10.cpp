#include<iostream>
using namespace std;
int main()
{
    string my_pass,input;
    cout<<"Enter password:";
    cin>>input;
    my_pass="Uet@2025";
    if(my_pass==input)
    cout<<endl<<"It matches";
    else
    cout<<endl<<"It didn't";
    return 0;
}
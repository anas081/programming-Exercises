#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    string name1,name2,name3;
    cout<<"Enter age of 1st: ";
    cin>>n1;
    cout<<endl<<"Enter age of 2nd: ";
    cin>>n2;
    cout<<endl<<"Enter age of 3rd: ";
    cin>>n3;
    cout<<endl<<"Enter name of 1st: ";
    cin>>name1;
    cout<<endl<<"Enter name of 2nd: ";
    cin>>name2;
    cout<<endl<<"Enter name of 3rd: ";
    cin>>name3;
    
    if(n1<n2&&n1<<n3)
    {
        
        cout<<endl<<"Younger brother is: "<<name1; 
    }
    if(n2<n3&&n2<n1)
    {

        cout<<endl<<"Younger brother is: "<<name2;
    }
    if(n3<n1&&n3<n2)
    cout<<"Younger brother is: "<<name3;  
    
return 0;
}
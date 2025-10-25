#include<iostream>
using namespace std;

int main()
{
    string temp,humidity;
    cout<<"Define temperature: ";
    cin>>temp;
    cout<<"Define humidity: ";     
          cin>>humidity;
    if(temp=="warm" && humidity=="dry")
        cout<<"Play Tennis"<<endl;
    else if(temp=="warm" && humidity=="humid")
        cout<<"Swim"<<endl;
    else if(temp=="cold" && humidity=="dry")
        cout<<"Play Basketball"<<endl;  
    else if(temp=="cold" && humidity=="humid")
        cout<<"Watch TV"<<endl;  
    else
        cout<<"Invalid input"<<endl;

        return 0;
   
    }


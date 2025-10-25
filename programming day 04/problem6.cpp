#include<iostream>
using namespace std;

int main()
{
    int speed;

    cout<<"Enter speed: ";
    cin>>speed;

    cout<<endl<<"Speed Information";

    if(speed<=10)
    cout<<endl<<"slow";

    else if(speed>10 && speed<=50)
    cout<<endl<<"Average";

    else if(speed>50 && speed<=150)
    cout<<endl<<"Fast";
    

    else if(speed>150 && speed<=1000)
    cout<<endl<<"Fast";

    else if(speed>1000)
    cout<<endl<<"Extreamly Fast";

    return 0;

}
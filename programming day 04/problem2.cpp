#include<iostream>
using namespace std;

int main()
{
    int speed;
    cout<<"Enter Speed of The car (km/h): ";
    cin>> speed;

    if(speed>100)
    cout<<endl<<"Halt....YOU WILL BE CHALLANED!!!";
    else
    cout<<endl<<"Perfect! You’re going good.";
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    double charge,time,current;
    cout<<"Enter the Charge(Q) in coulombs=";
    cin>>charge;
    cout<<endl<<"Enter the Time(T) in seconds=";
    cin>>time;
    current=charge/time;
    cout<<endl<<"Current (I) is="<<current;
    system("pause");
    
    return 0;
}
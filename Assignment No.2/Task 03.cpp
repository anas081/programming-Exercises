#include<iostream>
using namespace std;
int main()
{
    int initial,final_v,time,acc;
    cout<<"Enter Initial velocity(m/s) of the car:";
    cin>>initial;
    cout<<endl<<"Enter acceleration(m/s^2) of the car:";
    cin>>acc;
    cout<<endl<<"Enter Time (S): ";
    cin>>time;
    final_v=(acc*time)+initial;
    cout<<endl<<"Final velocity(m/s) is: "<<final_v;
    
    return 0;
} 

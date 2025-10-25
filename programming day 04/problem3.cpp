#include<iostream>
using namespace std;

int main()
{
    float temp1,temp2,diff;
    cout<<"Enter Temprature of City 1: ";
    cin>>temp1;

    cout<<endl<<"Enter Temprature of City 2: ";
    cin>>temp2;
    diff=temp1-temp2;
    if(diff>10)
    cout<<endl<<"Difference is too Big";
    return 0;
}
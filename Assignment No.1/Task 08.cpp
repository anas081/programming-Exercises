#include<iostream>
using namespace std;
int main()
{
    double volt,current;
   long power;
    cout<<"Enter Voltages(In Volts):";
    cin>>volt;
    cout<<endl<<"Enter Current(In Ampares):";
    cin>>current;
    power=volt*current;
    cout<<endl<<"The Power is: "<<power<<" Watts";
    system("pause");

    return 0;
}
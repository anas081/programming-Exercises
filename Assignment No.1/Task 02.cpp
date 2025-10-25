#include<iostream>
using namespace std;
int main()
{
    int lbs;
    double weight;
    cout<<"Enter weight in lbs=";
    cin>>lbs;
    cout<<endl<<"As 1 lbs= 0.45kgs";
    weight=lbs*0.45;
    cout<<endl<<"Weight in kilograms is="<<weight;
    
    return 0;
}

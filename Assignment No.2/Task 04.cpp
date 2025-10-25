#include<iostream>
using namespace std;
int main()
{
    int percent;
    float i,p;
    cout<<"Enter imposter count: ";
    cin>>i;
    cout<<endl<<"Enter player count: ";
    cin>>p;
    percent=100*(i/p);
    cout<<endl<<"Chance of being an imposter: "<<percent<<"%";
    return 0;
}
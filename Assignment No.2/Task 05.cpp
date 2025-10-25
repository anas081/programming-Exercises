#include<iostream>
using namespace std;
int main()
{
    string name;
    int w,days;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<endl<<"Enter weight you want to lose (kg): ";
    cin>>w;
    days=w*15;
    cout<<endl<<"Hello "<<name;
    cout<<endl<<"To lose "<<w<<" kg, you need "<<days<<" days.";
    return 0;
}

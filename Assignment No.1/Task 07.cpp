#include<iostream>
using namespace std;
int main()
{
    int hours;
   long sec;
    cout<<"Enter The Number of Hours:";
    cin>>hours;
    sec=hours*60*60;
    cout<<endl<<hours<<" hours is equilent to: "<<sec<<" seconds";

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int age,year;
   long days;
    cout<<"Enter Your age in years:";
    cin>>age;
   year =365;
   days=age*year;
   cout<<endl<<"Your age in days is approximately "<<days<<" days";
    return 0;
}
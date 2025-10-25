#include<iostream>
using namespace std;
int main()
{
    int population,n;
   long f_population;
    cout<<"Enter the current World population: ";
    cin>>population;
    cout<<endl<<"Enter the monthly birth rate (Number of births per month): ";
    cin>>n;
   f_population=population+(n*12)*30;
   cout<<endl<<"The population in three decades will be "<<f_population;
 
   return 0;
}
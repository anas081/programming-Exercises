#include<iostream>
using namespace std;
int main()
{
    float bagSize,bagCost,area,costPerPound,costPerSqFt;
    cout<<"Enter size of fertilizer bag (pounds): ";
    cin>>bagSize;
    cout<<endl<<"Enter cost of the bag: ";
    cin>>bagCost;
    cout<<endl<<"Enter area covered (sq ft): ";
    cin>>area;
    costPerPound=bagCost/bagSize;
    costPerSqFt=bagCost/area;
    cout<<endl<<"Cost per pound: "<<costPerPound;
    cout<<endl<<"Cost per square foot: "<<costPerSqFt;
    return 0;
}

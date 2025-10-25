#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int inheritedMoney,yearLimit,currentAge,totalSpent;
    double remainingMoney;
    
    currentAge=18;
    totalSpent=0;
    cout<<"Enter Money: ";
    cin>>inheritedMoney;
    cout<<endl<<"Enter Year: ";
    cin>>yearLimit;
    
    for(int year=1800; year<=yearLimit; year++)
    {
        if(year%2==0)
        {
            totalSpent=totalSpent+12000;
        }
        else
        {
            totalSpent=totalSpent+12000+50*currentAge;
        }
        currentAge++;
    }
    
    remainingMoney=inheritedMoney-totalSpent;
    
    cout<<fixed<<setprecision(2);
    
    if(remainingMoney>=0)
    {
        cout<<endl<<"Yes! He will live a carefree life and will have "<<remainingMoney<<" dollars left.";
    }
    else
    {
        cout<<endl<<"He will need "<<-remainingMoney<<" dollars to survive.";
    }
    
    return 0;
}
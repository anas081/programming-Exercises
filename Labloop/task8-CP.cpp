#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int ageOfLilly, toyCount;
    double pricePerToy, machinePrice, totalMoney, moneySaved, moneyFromToys;
    
    toyCount=0;
    moneySaved=0.0;
    
    cout<<endl<<"Enter Lilly's age: ";
    cin>>ageOfLilly;
    cout<<endl<<"Enter price of washing machine: ";
    cin>>machinePrice;
    cout<<endl<<"Enter price per toy: ";
    cin>>pricePerToy;
    
    for(int i=1; i<=ageOfLilly; i++)
    {
        if(i%2==0)
        {
            moneySaved=moneySaved+(i/2)*10.0-1.0;
        }
        else
        {
            toyCount++;
        }
    }
    
    moneyFromToys=toyCount*pricePerToy;
    totalMoney=moneySaved+moneyFromToys;
    
    cout<<fixed<<setprecision(2);
    
    if(totalMoney>=machinePrice)
    {
        cout<<endl<<"Yes! "<<totalMoney-machinePrice;
    }
    else
    {
        cout<<endl<<"No! "<<machinePrice-totalMoney;
    }
    
    return 0;
}
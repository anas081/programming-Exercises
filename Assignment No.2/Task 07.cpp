#include<iostream>
using namespace std;
int main()
{
    string movie;
    float aPrice,cPrice,donationPercent,total,donation,remain;
    int aSold,cSold;
    cout<<"Enter movie name: ";
    cin>>movie;
    cout<<endl<<"Enter adult ticket price: ";
    cin>>aPrice;
    cout<<endl<<"Enter child ticket price: ";
    cin>>cPrice;
    cout<<endl<<"Enter adult tickets sold: ";
    cin>>aSold;
    cout<<endl<<"Enter child tickets sold: ";
    cin>>cSold;
    cout<<endl<<"Enter donation percent: ";
    cin>>donationPercent;
    total=(aPrice*aSold)+(cPrice*cSold);
    donation=total*(donationPercent/100);
    remain=total-donation;
    cout<<endl<<"Movie: "<<movie;
    cout<<endl<<"Total: "<<total;
    cout<<endl<<"Donation: "<<donation;
    cout<<endl<<"Remaining: "<<remain;
    return 0;
}

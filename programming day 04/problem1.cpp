#include<iostream>
using namespace std;

int main()
{
    int ticket_price;
    float ireland,any;
    string country;

    cout<<"Enter Country name:";
    getline(cin ,country);

    cout<<endl<<"Enter ticket price in $: ";
    cin>>ticket_price;

    ireland=0.10*ticket_price;
    any=0.05*ticket_price;
    
    if(country=="ireland"||country=="Ireland")
    {
        cout<<endl<<"Ticket price of Ireland after 10% discount: "<<ticket_price-ireland;
    }
    else
     cout<<endl<<"Ticket price of "<<country<<" after 5% discount: "<<ticket_price-any;
     return 0;

}
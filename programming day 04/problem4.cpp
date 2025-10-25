#include<iostream>
using namespace std;
int main()
{
    float red_Rose=2.00; 
    float white_Rose=4.10;
    float tulips=2.50;
    int red,white,tul;
    double total,discount;

    cout<<endl<<"Number of Red Rosses purchased: ";
    cin>>red;

    cout<<endl<<"Number of White Rosses purchased: ";
    cin>>white;

    cout<<endl<<"Number of Tulips purchased: ";
    cin>>tul;


    total=(red*red_Rose)+(white*white_Rose)+(tul*tulips);
    discount=0.20*total;

    if(total>200)
    {
      cout<<endl<<"Total price: "<<total;
      cout<<endl<<"Payable amount after 20% discount: "<<total-discount;
    }
    else
    cout<<endl<<"Total payeable amount: "<<total;
    return 0;
}
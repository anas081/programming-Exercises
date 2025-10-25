#include<iostream>
using namespace std;
int main()
{
    int price;
    cout<<"Enter the price of the dress: ";
    cin>>price;
    if(price<1500)
    {
        cout<<endl<<"Buy the dress";
    }
    else
    cout<<endl<<"Don't Buy the dress";
    system("pause");
    return 0;
} 

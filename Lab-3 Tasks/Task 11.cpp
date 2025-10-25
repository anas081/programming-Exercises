#include<iostream>
using namespace std;
int main()
{
    int amount,discount_1,discount_2,discount;
    cout<<"Enter Amount: ";
    cin>>amount;
    discount_1=(5.0/100)*amount;
    
    discount_2=(10.0/100)*amount;
    if(amount<=5000)
    {
        discount=amount-discount_1;
        cout<<endl<<"Price after 5% discount: "<<discount;

    }
    else 
    {
        discount= amount-discount_2;
       cout<<endl<<"Price after 10% discount: "<<discount;
    }
    return 0;
}
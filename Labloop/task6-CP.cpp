#include<iostream>
using namespace std;

int main()
{
    int a,b,lcm,gcd;

    cout<<"Enter two numbers: ";
    cin>>a>>b;
//to calculate LCM
    int x=a;
    int y=b;

    while(b!=0) 
    {
        int temp=b;
        b=a%b;
        a=temp;
    }

    gcd=a;
    lcm=(x*y)/gcd;

    cout<<endl<<"GCD (HCF): "<<gcd;
    cout<<endl<<"LCM: "<<lcm;

    return 0;
}

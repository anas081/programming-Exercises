#include<iostream>
using namespace std;

int main()
{
    int num,digit,frequency=0;
    int lastDigit;

    cout<<"Enter a Number: ";
    cin>>num;
    cout<<endl<<"Enter a digit to check: ";
    cin>>digit;

    if(num<0)
    num=-num;
     
    while(num>0)
    { 
        lastDigit = num%10;

        if(lastDigit==digit)
        frequency++;
        num=num/10;
    }
    cout<<endl<<"Frequency of " <<digit<<" is "<<frequency;
    return 0;
}

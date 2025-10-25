#include<iostream>
using namespace std;

int main()
{
    int num,digit,sum=0;

    cout<<"Enter a Number: ";
    cin>>num;

    if(num<0)
    num=-num;

    while(num>0)
    {
        digit=num%10;
        sum+=digit;
        num=num/10;
    }
    cout<<endl<<"Sum of digit is: "<<sum;
    return 0;
}

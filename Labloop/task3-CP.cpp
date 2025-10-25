#include<iostream>
using namespace std;

int main()
{
    int num,digit=0;
    cout<<"Enter number: ";
    cin>>num;

    if(num==0)
    digit=1;

    if(num<0)
    num=-num;

    while(num>0)
    {
        num=num/10;
        digit++;
    }
    cout<<endl<<"Total Digits: "<<digit;
    return 0;
}
     

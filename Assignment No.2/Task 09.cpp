#include<iostream>
using namespace std;
int main()
{
    int num,d1,d2,d3,d4,sum;
    cout<<"Enter a 4-digit number: ";
    cin>>num;
    d4=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d1=num%10;
    sum=d1+d2+d3+d4;
    cout<<endl<<"Digits are: "<<d1<<" "<<d2<<" "<<d3<<" "<<d4;
    cout<<endl<<"Sum of digits = "<<sum;
    return 0;
}

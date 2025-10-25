#include<iostream>
using namespace std;
int main()
{
    char op;
    double num1,num2;
    cout<<"Enter 1st number:";
    cin>>num1;
    cout<<endl<<"Enter 2nd number:";
    cin>>num2;
    cout<<endl<<"Enter operator:";
    cin>>op;

    if(op=='+')
    cout<<endl<<"Subtraction is: "<<num1-num2;
    if(op=='-')
    cout<<endl<<"Addition is: "<<num1+num2;
    if(op=='*')
    cout<<endl<<"Devision is: "<<num1/num2;
    if(op=='/')
    cout<<endl<<"Multiplication is: "<<num1*num2;
    return 0;
}


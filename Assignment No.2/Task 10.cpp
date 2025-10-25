#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;
    int sum,sub,result;
    long long prod;
    cout<<"Enter first 5 numbers for addition: ";
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<endl<<"Enter next 5 numbers for multiplication: ";
    cin>>n6>>n7>>n8>>n9>>n10;
    cout<<endl<<"Enter last 5 numbers for subtraction: ";
    cin>>n11>>n12>>n13>>n14>>n15;
    sum=n1+n2+n3+n4+n5;
    prod=n6*n7*n8*n9*n10;
    sub=n11-n12-n13-n14-n15;
    result=(sum+prod)-sub;
    cout<<endl<<"Sum = "<<sum;
    cout<<endl<<"Product = "<<prod;
    cout<<endl<<"Subtraction = "<<sub;
    cout<<endl<<"Final Result = "<<result;
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int num=0;
    int sum=0;

    while(num>=0)
    {
        sum=num+sum;
        cout<<"Enter a Number: ";
        cin>>num;
    }
    cout<<endl<<"Sum is: "<<sum;
    return 0;

}

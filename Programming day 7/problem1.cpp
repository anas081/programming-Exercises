#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the upper bound: ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        if(i%4==0)
            cout<<i*10;
        else
            cout<<i;

        if(i!=num)
            cout<<", ";
    }

    cout<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
   long long  bits,bit,mb;
    cout<<"Enter The size in MegaBytes (MB):";
    cin>>mb;
    bit=1024*1024*8;
    bits=mb*bit;
    cout<<endl<<mb<<" MB is equilent to "<<bits<<" bits";
    return 0;
}
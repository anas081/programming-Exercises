#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout<<"Enter the triangle number: ";
    cin>>n;

    for(int i=1;i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<"The number of dots are: "<<sum<<endl;

    return 0;
}

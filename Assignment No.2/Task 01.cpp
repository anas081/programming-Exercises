#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enyter the number of side of polygon: ";
    cin>> n;
    sum=(n-2)*180;
    cout<<endl<<"The sum of internals angles of a "<<n<<"-sided polygon is: "<<sum<<" Degrees";
    
    return 0;
}
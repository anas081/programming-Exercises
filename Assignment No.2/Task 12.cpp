#include<iostream>
using namespace std;
int main()
{
    int n,w,h,wallArea,walls;
    cout<<"Enter paint capacity in sq meters: ";
    cin>>n;
    cout<<endl<<"Enter width of wall (m): ";
    cin>>w;
    cout<<endl<<"Enter height of wall (m): ";
    cin>>h;
    wallArea=w*h;
    walls=n/wallArea;
    cout<<endl<<"Number of complete walls that can be painted: "<<walls;
    return 0;
}
